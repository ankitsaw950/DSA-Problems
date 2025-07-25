#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> getSumAbsoluteDifferences(vector<int> &nums)
    {
        vector<int> ans;
        int n = nums.size();

        vector<int> left(n, 0);
        vector<int> right(n, 0);
        // left[0]=nums[0];
        // right[n-1]=nums[n-1];

        // Build the left part
        for (int i = 1; i < n; i++)
        {
            left[i] = left[i - 1] +nums[i-1];;
        }

        cout << "Printing the left part : ";
        for (int i = 0; i < left.size(); i++)
        {
            cout << left[i] << " ";
        }
        cout << endl;

        // Build the right part
        for (int i = n - 2; i >= 0; i--)
        {
            right[i] = right[i + 1] + nums[i+1];
        }

        cout << "Printing the right part : ";
        for (int i = 0; i < right.size(); i++)
        {
            cout << right[i] << " ";
        }
        cout << endl;

        //  Finally building the answer
        for (int i = 0; i < n; i++)
        {
            int sum = abs(nums[i] - left[i]);
            cout<<"Left[i] ka value : "<<left[i]<<endl;
            cout<<"Sum left ke sath = "<<sum <<endl;
            sum += abs(nums[i] - right[i]);
            cout<<"Right[i] ka value : "<<right[i]<<endl;
            cout<<"Sum right ke sath = "<<sum <<endl;

            ans.push_back(sum);
        }
        return ans;
    }
};

int main()
{
    Solution s = Solution();

    vector<int> nums = {2, 3, 5};

    vector<int> result = s.getSumAbsoluteDifferences(nums);

    cout << "Printing the output : ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}