#include <iostream>
#include <unordered_map>
#include <climits>  // this header is used to use the INT_MAX or INT_MIN
using namespace std;

class Solution
{
public:
    int maxDifference(string s)
    {
        unordered_map<char, int> mp;

        for (char ch : s)
        {
            mp[ch]++;
        }

        cout << "Printing the values of inside the map :" << endl;
        for (auto it : mp)
        {
            cout << it.first << " " << it.second << endl;
        }
        cout << endl;
        int even = INT_MAX;
        int odd = 0;

        for (auto freq : mp)
        {
            if (freq.second % 2 == 0)
            {
                even = min(even, freq.second);
            }
            else
            {
                odd = max(odd, freq.second);
            }
        }

        cout<<"value of odd : "<<odd<<endl;
        cout<<"value of even : "<<even<<endl;

        return odd - even;
    }
};

int main()
{
    Solution s = Solution();

    string str = "aaaaabbc";

    int result = s.maxDifference(str);

    cout << "The result is : " << result << endl;
}