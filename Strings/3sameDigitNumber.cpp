// 2264. Largest 3-Same-Digit Number in String

#include <iostream>
using namespace std;

string largestGoodInteger(string num)
{
    int n = num.length();
    if (n < 3)
        return "";
    string result = "";
    int i = 1;
    while (i < n - 1)
    {
        cout << num[i] << endl;
        if (num[i] == num[i - 1] && num[i] == num[i + 1])
        {
            if (num[i] > result[0])
            {
                result = "";
                for (int j = 0; j < 3; j++)
                {
                    result += num[i];
                }
                cout << result << endl;
            }
            i += 3;
        }
        else
        {
            i++;
        }
    }

    return result;
}
int main()
{

    string num = "6777133339";
    string result = largestGoodInteger(num);
    cout << "The largest 3-same-digit number is : " << result;

    return 0;
}