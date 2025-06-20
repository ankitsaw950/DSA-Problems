#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> findKDistantIndices(vector<int> &nums, int key, int k)
    {
        // cout<<"Hello";
        vector<int> position;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == key)
            {
                
                position.push_back(i);
            }
        }

        for (int i = 0; i < position.size(); i++)
        {
            cout << position[i] << " ";
        }

        vector<int> result;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < position.size(); j++)
            {

                cout << "Value of i : " << nums[i] << " ,Value of j : " << nums[j] << " ,difference : " << abs(i - j) << endl;
                if ((abs(i - position[j]) <= k) && nums[position[j]] == key)
                {
                    result.push_back(i);
                    break;
                }
            }
        }

        return result;
    }
};

int main()
{

    // vector<int> nums = {3, 4, 9, 1, 3, 9, 5};
    vector<int> nums = {2,2,2,2,2};
    int key = 2, k = 2;

    Solution s = Solution();

    vector<int> result = s.findKDistantIndices(nums, key, k);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}