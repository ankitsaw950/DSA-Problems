// leetcode : 3085

#include <iostream>
#include <unordered_map>
#include <string>
#include <climits>
using namespace std;

class Solution
{
public:
    int minimumDeletions(string word, int k)
    {
        int n = word.length();

        unordered_map<char, int> mp;

        for (char ch : word)
        {
            mp[ch]++;
        }

        for (auto it : mp)
        {
            cout<<it.first<<" "<<it.second <<endl;
        }

        int min = INT_MAX;
        char ch ;
        for (auto it : mp)
        {
            if (it.second < min)
            {
                min = it.second;
                ch = it.first;
            }
        }

        cout << "the minimum occurrence value is : " << min << endl;
        int count = 0;

        for (auto it : mp)
        {
            int y = it.second;
           
            if (it.first != ch && y < min)
            {
                count += y;
            }
            else if (it.first != ch && y > (min + k)) // y= 2   4-1-1
            {
                count += (y - min - k);
            }
             cout<<"y : "<<y<<" count :"<<count<<endl;
        }
        return count;
    }
};

int main()
{

    Solution s = Solution();

    string word = "aabcaba";
    int k = 0;

    int ans = s.minimumDeletions(word, k);
    cout << "The ans is  :" << ans << endl;

    return 0;
}