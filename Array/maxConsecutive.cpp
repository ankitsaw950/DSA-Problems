// Leetcode 2274

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <unordered_map>

class Solution
{
public:
    int maxConsecutive(int bottom, int top, vector<int> &special)
    {

        int ans = 0;
        int count = 0;

        sort(special.begin(), special.end());
        unordered_map<int, int> mp;

        for (int a : special)
        {
            mp[a]++;
        }

        cout << "printing the element inside the map : ";
        for (auto it : mp)
        {
            cout << it.first << " ";
        }
        cout << endl;

        for (int i = bottom; i <= top; i++)
        {
            count++;
            
            if (mp.find(i) != mp.end())
            {
                ans = max(ans, count-1);
                count = 0;
            }
            cout<<"Floor number : "<<i <<" and count : " <<count<<" and max value :"<<ans<<endl;
           
        }
        return ans;
    }
};

int main()
{
    Solution s = Solution();

    int bottom = 2;
    int top = 9;
    vector<int> special = {4, 6};
    int result = s.maxConsecutive(bottom, top, special);
    cout << "the result is : " << result << endl;
}