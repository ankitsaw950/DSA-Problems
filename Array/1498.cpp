// 1498. Number of Subsequences That Satisfy the Given Sum Condition

#include <iostream>
#include <vector>
#include<algorithm>
#include<climits>

using namespace std;

class Solution
{
public:
    int numSubseq(vector<int> &nums, int target)
    {
        int n =nums.size();
        sort(begin(nums),end(nums));

        int ans = 0;
        int Min = INT_MAX;
        int Max = INT_MIN;
        for(int i =0;i<n-1;i++){
            Min=nums[i];
            for(int j = i+1;j<n;j++){
                Max = max(Max,nums[j]);
                
            }
        }
    }
};

int main()
{

    Solution s = Solution();

    vector<int> nums = {3, 5, 6, 7};
    int target = 9;

    int ans = s.numSubseq(nums, target);

    cout << "The result is : " << ans << endl;

    return 0;
}