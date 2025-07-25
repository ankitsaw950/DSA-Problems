#include<iostream>
#include<vector>

using namespace std;


int maximumSum(vector<int> &nums,int k){
  int sum = 0 ,maxSum = 0;

  // Find the sum of first window 
 for(int i =0 ;i<k;i++){
    sum+=nums[i];
 }

 maxSum = sum;

 //  Remaining window element ke liye loop run karke value find karo 

 for(int i =k;i<nums.size();i++){
    sum += nums[i]-nums[i-k];
    maxSum = max(maxSum,sum);
 }

 return maxSum;

}

int main(){
    vector<int> nums = {1,3,2,6,-1,4,1,8,2};
    int k = 3;

    int result = maximumSum(nums,k);

    cout<<"The result is : " <<result;
   

   
}


