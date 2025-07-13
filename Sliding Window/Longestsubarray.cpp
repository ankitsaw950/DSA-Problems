#include<iostream>
#include<vector>

using namespace std;

int longest(vector<int> &arr,int k){
    int start  =0 ,sum=0;
    int maxLen =0;
    int n = arr.size();
    for(int end = 0;end<n;end++){
        sum+=arr[end];

        while(sum>k && start<=end){
            sum-=arr[start];
            start++;
        }

        maxLen = max(maxLen,end-start+1);
    }

    return maxLen;
}

int main(){

    vector<int> arr = { 1,2,1,0,1,1,0};
    int k =4;
    int result = longest(arr,k);

    cout<<"Printing the result : "<<result;
}