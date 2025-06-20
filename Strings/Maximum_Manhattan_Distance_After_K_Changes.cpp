// Leetcode : 3443
// https://leetcode.com/problems/maximum-manhattan-distance-after-k-changes/

#include <iostream>
using namespace std;

#include <string>
#include <climits>

class Solution
{
public:
    int maxDistance(string s, int k)
    {
        int count = INT_MIN;

        int n = s.length();

        for (int i = 0; i < n; i++)
        {
            int x = 0;
            int y = 0;

            
        }
    }
};

int main()
{

    string s = "NWSE";
    int k = 1;

    Solution sol = Solution();
    int ans = sol.maxDistance(s, k);

    cout << "the result is : " << ans;

    return 0;
}