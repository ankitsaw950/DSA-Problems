#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    char kthCharacter(long long k, vector<int> &operations)
    {
        string s = "a";
        int optCount = 0;
        int opt = operations.size();
        while (s.length() < k)
        {
            int n = s.length();
            cout << s << endl;

            if (operations[optCount] == 0 && optCount < opt)
            {
                for (int i = 0; i < n; i++)
                {
                    char ch = s[i];
                    s.push_back(ch);
                }
                optCount++;
            }
            else if (operations[optCount] == 1 && optCount < opt)
            {
                for (int i = 0; i < n; i++)
                {
                    char ch = s[i] == 'z' ? 'a' : s[i] + 1;
                    s.push_back(ch);
                }
                optCount++;
            }
            cout << "Hello " << endl;
        }

        return s[k - 1];
    }
};

int main()
{

    Solution s = Solution();
    vector<int> operations = {0, 1, 0, 1};
    long long k = 10;
    char ch = s.kthCharacter(k, operations);
    cout << "the output character is : " << ch << endl;

    return 0;
}