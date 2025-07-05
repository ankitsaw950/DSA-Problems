// Leetcode : 2148

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

class Solution
{
public:
    int countElements(vector<int> &nums)
    {
        int n = nums.size();

        sort(nums.begin(), nums.end()); // 2 7 11 15

        int count = 0;
        int minVal = nums[0];
        int maxVal = nums[n - 1];
        cout<<"min val : "<<minVal<<endl;
        cout<<"max val : "<<maxVal<<endl;


        for (int i = 1; i < n - 1; i++)
        {
            if (nums[i] > minVal && nums[i] < maxVal)
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    vector<int> nums = {11, 7, 2, 15};

    Solution s = Solution();
    int result = s.countElements(nums);
    cout << "Ans is : " << result << endl;
}