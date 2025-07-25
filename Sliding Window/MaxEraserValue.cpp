#include<iostream>
#include<vector>
#include<climits>

using namespace std;

 int maximumUniqueSubarray(vector<int>& nums) {

    int n = nums.size();
    int res = INT_MIN;

    int i = 0, j =0;
    int sum = 0;



        
        
}


int main(){
    vector<int> nums = {4,2,4,5,6};
    // vector<int> nums = {5,2,1,2,5,2,1,2,5};

    int result = maximumUniqueSubarray(nums);
    cout<<"The result is : "<<result<<endl;



    return 0;
}