#include <iostream>
// #include<algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {

        int n = nums.size();

        int i = 0;
        int j = 1;

        while (j < n)
        {
            if (nums[j] % 2 == 0)
            {
                swap(nums[i], nums[j]);

                i++;
            }
            j++;
        }
        return nums;
    }
};

void printArray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> arr = {3, 1, 2, 4};

    Solution s = Solution();

    vector<int> result = s.sortArrayByParity(arr);

    printArray(result);

    return 0;
}