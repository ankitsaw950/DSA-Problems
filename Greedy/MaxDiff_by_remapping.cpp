// Leetcode 2566

#include <iostream>
#include <climits>
using namespace std;

class Solution
{
public:
    int minMaxDifference(int num)
    {

        string str = to_string(num);
        char char9 = '9';

        // First find the character which is going to be changed to 9
        for (char ch : str)
        {
            if (ch != '9')
            {
                char9 = ch;
                break;
            }
        }
        cout << "Original string:" << str << endl;

        string temp = str;

        // Now replace the occurence of that particular character to 9

        for (char &ch : temp)
        {
            if (ch == char9)
            {
                ch = '9';
            }
        }

        int max = stoi(temp);
        cout << "After replacing the character 9 :" << temp << endl;
        cout << "The maximum value is : " << max << endl;

        temp = str;
        char ch0 = '0';
        for (char &ch : temp)
        {
            if (ch != '0')
            {
                ch0 = ch;
                break;
            }
        }

        for (char &ch : temp)
        {
            if (ch == ch0)
            {
                ch = '0';
            }
        }
        int min = stoi(temp);
        cout << "After replacing the character to 0 :" << temp << endl;
        cout << "The minimum value is : " << min << endl;

        return max - min;
    }
};

int main()
{
    Solution s = Solution();
    int num = 11891;

    int result = s.minMaxDifference(num);

    cout << result;

    return 0;
}