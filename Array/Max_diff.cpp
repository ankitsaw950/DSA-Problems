// leetcode = 2016


#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();

        int ans = INT_MIN;
        for(int i =0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[j]>nums[i]){
                    ans = max(ans,(nums[j]-nums[i]));
                }
            }
        }

        return ans==INT_MIN?-1:ans;

        // return ans;
    }
};

int main(){
    
    Solution s = Solution();
    vector<int> num = {9,4,3,2};

    int result = s.maximumDifference(num);
    cout<<"the result is : "<<result<<endl;

    return 0;
}