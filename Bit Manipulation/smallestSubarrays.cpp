#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> smallestSubarrays(vector<int> &nums)
    {
        int maxOr =0;
        for(int num : nums){
            maxOr |= num;
        }

        vector<int> result;

        int count;
        int temp=0;
        int i = 0;
        int n = nums.size();
        int j =0;

        while(j<n){
            temp |= nums[j];
        }
       
    }
};

int main()
{
    vector<int> nums = {1, 0, 2, 1, 3};

    return 0;
}