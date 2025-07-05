// Leetcode  : 2138
// https://leetcode.com/problems/divide-a-string-into-groups-of-size-k/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<string> divideString(string s, int k, char fill)
    {
        vector<string> ans;
        int i = 0;
        while (i < s.length())
        {
            string temp = "";
            int j = 0;
            while (j < k && i < s.length())
            {
                temp += s[i];
                j++;
                i++;
            }

            while (temp.length() != k)
            {

                temp += fill;
            }

            ans.push_back(temp);
        }

        return ans;
    }
};

int main()
{

    Solution s = Solution();

    string s1 = "abcdefghij";
    int k = 3;
    char fill = 'x';
    vector<string> result = s.divideString(s1, k, fill);

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j];
        }
        cout << " ";
    }

    return 0;
}