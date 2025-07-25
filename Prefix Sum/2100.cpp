

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> goodDaysToRobBank(vector<int> &security, int time)
    {
        int n = security.size();
        vector<int> nonInc(n, 0);
        vector<int> nonDec(n, 0);
        vector<int> result;

        // non-increasing prefix
        for (int i = 1; i < n; i++)
        {
            if (security[i] <= security[i - 1])
                nonInc[i] = nonInc[i - 1] + 1;
        }

        cout << "printing the nonIncreasing prefix : ";
        for (int i = 0; i < nonInc.size(); i++)
        {
            cout << nonInc[i] << " ";
        }
        cout << endl;

        // non-decreasing suffix
        for (int i = n - 2; i >= 0; i--)
        {
            if (security[i] <= security[i + 1])
            {
                // cout << "Checking : " << security[i] << " <=  " << security[i + 1] << endl;
                nonDec[i] = nonDec[i + 1] + 1;
            }
        }

        cout << "printing the nonDecreasing prefix : ";
        for (int i = 0; i < nonDec.size(); i++)
        {
            cout << nonDec[i] << " ";
        }
        cout << endl;

        // collect valid indices
        for (int i = time; i < n - time; i++)
        {
            if (nonInc[i] >= time && nonDec[i] >= time)
            {
                result.push_back(i);
            }
        }

        return result;
    }
};

int main()
{
    vector<int> security = {5, 3, 3, 3, 5, 6, 2};
    int time = 2;

    Solution s = Solution();

    vector<int> ans = s.goodDaysToRobBank(security, time);

    cout << "Printing the result : ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}