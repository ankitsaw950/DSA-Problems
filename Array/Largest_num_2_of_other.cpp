// leetcode : 747

#include <iostream>
using namespace std;
#include <vector>
#include<algorithm>

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        sort(begin(nums), end(nums));
        int n = nums.size();

        bool flag;
        for (int i = 0; i < n - 1; i++) {
            flag = false;
            if (nums[n - 1] >= nums[i]) {
                flag = true;
            }
        }

        if (flag) {
            return n - 1;
        } else
            return -1;
    }
};

int main(){
    vector<int> nums= {3,6,1,0};
    Solution s = Solution();

    int ans = s.dominantIndex(nums);
    cout<<"Ans :" <<ans<<endl;

}