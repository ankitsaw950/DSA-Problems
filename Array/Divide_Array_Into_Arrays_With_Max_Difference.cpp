#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> divideArray(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<vector<int>> result;

        int count = n / 3; // this is to keep a count of resulting arrays
        sort(begin(nums), end(nums));
        cout << "printing the nums array : " << endl;

        for (int i = 0; i < n; i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;

        int j = 0;
        for (int i = 0; i < count; i++)
        {
            vector<int> temp;
            int k = 0;
            bool flag = false;
            while (j < n && k < 3)
            {
                if ((nums[j + 1] - nums[j]) > k)
                {
                    flag = true;
                    break;
                }
                temp.push_back(nums[j]);
                j++;
                k++;
            }
            if (flag == true)
                result.push_back(temp);
            else{
                result.push_back({});
                break;
            }
        }

        return result;
    }
};

void printResult(vector<vector<int>> &nums)
{
    int m = nums.size();
    int n = nums[0].size();

    cout << "Printing the result : [ ";

    for (int i = 0; i < m; i++)
    {
        cout << "[ ";
        for (int j = 0; j < n; j++)
        {
            cout << nums[i][j] << " ";
        }
        cout << " ] , ";
    }
    cout << endl;
}

int main()
{

    vector<int> nums = {1, 3, 4, 8, 7, 9, 3, 5, 1};
    // vector<int> nums = {2, 4, 2, 2, 5, 2};
    int k = 2;

    Solution s = Solution();

    vector<vector<int>> ans = s.divideArray(nums, k);
    printResult(ans);

    return 0;
}


