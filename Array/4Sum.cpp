// leetcode : 18

#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        vector<vector<int>> result;
        int n = nums.size();
        for (int i = 0; i < n - 3; i++)
        {
            for (int j = i + 1; j < n - 2; j++)
            {
                for (int k = j + 1; k < n - 1; k++)
                {
                    for (int l = k + 1; l < n; l++)
                    {
                        int sum = nums[i] + nums[j] + nums[k] + nums[l];
                        cout << "Sum : " << sum << endl;
                       
                        if (sum == target)
                        {
                          
                            result.push_back({nums[i],nums[j],nums[k],nums[l]});
                            cout<<"Answer is pushed "<<endl;
                        }
                    }

                }
            }
        }
        return result;
    }
};

int main()
{
    // vector<int> nums = {1, 0, -1, 0, -2, 2};
    vector<int> nums = {2,2,2,2,2};

    int target = 8;

    Solution s = Solution();

    vector<vector<int>> result = s.fourSum(nums, target);
    cout<<"Final output is :"<<endl;

    for (const auto &a : result)
    {
        for (int b : a)
        {
            cout << b << " ";
        }
        cout << endl;
    }
    cout << endl;
}