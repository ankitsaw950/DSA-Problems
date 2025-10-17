#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int M = 1e9 + 7;

bool countSetBits(long long int n, int k)
{
    int count = 0;
    while (n > 0)
    {
        if ((n & 1) == 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count == k;
}

void generateSequences(int n, int m, vector<int> &current, vector<vector<int>> &sequences)
{
    if ((int)current.size() == m)
    {
        sequences.push_back(current);
        return;
    }

    for (int i = 0; i < n; i++)
    {
        current.push_back(i);
        generateSequences(n, m, current, sequences);
        current.pop_back();
    }
}

int magicalSequence(int m, int k, vector<int> &nums)
{

    int n = nums.size();
    vector<vector<int>> sequences;
    vector<int> current;

    generateSequences(n, m, current, sequences);

    // Printing all the sequences that are possible to be made from the given array values of nums
    // Print all valid sequences

    // for (auto &seq : sequences)
    // {
    //     cout << "[ ";
    //     for (int idx : seq)
    //         cout << idx << " ";
    //     cout << "]" << endl;
    // }

    cout<< sequences.size()<<endl;

    //  Count the magical sequences

    vector<int> magical;
    long long int finalSum = 0;
    for (auto &seq : sequences)
    {
        long long int sum = 0;
        for (int idx : seq)
        {
            sum += (1LL << idx);
        }

        if (countSetBits(sum, k))
        {
            long long prod = 1;
            for (int idx : seq)
            {
                prod = (prod * nums[idx]) % M;
            }
            finalSum = (finalSum + prod) % M;
            magical.push_back(prod);
        }
    }

    // Print the magical sequences

    // for (int num : magical)
    // {
    //     cout << num << " ";
    // }
    // cout << endl;

    cout << "SUM : " << finalSum << endl;
}

int main()
{

    int m = 5;
    int k = 5;
    vector<int> nums = {1, 10, 100, 10000, 1000000};
    magicalSequence(m, k, nums);

    return 0;
}