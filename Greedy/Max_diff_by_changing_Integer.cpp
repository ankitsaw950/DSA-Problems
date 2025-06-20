// #include <iostream>
// using namespace std;
// // #include<string>

// class Solution
// {
// public:
//     int maxDiff(int num)
//     {
//         string str = to_string(num);
//         cout << "Original string : " << str << endl;

//         char ch9 = '9';
//         for (char ch : str)
//         {
//             if (ch != '9')
//             {
//                 ch9 = ch;
//                 break;
//             }
//         }
//         string temp = str;
//         cout << "Jsiko 9 me change karna hai : " << ch9 << endl;

//         for (char &ch : temp)
//         {
//             if (ch == ch9)
//             {
//                 ch = '9';
//             }
//         }

//         int maximum = stoi(temp);
//         cout << "Maximum value : " << maximum << endl;

//         char ch1 = '1';
//         bool flag = false;
//         for (int i = 0; i < str.length()-1; i++)
//         {
//             if (str[0] != '1')
//             {
//                 ch1 = str[0];
//                 flag = true;
//                   cout<<"Yaha pe aya hi nahi"<<endl;
//                 break;
//             }
//            else if(str[i+1] != '1' && str[i+1] != '0'){
//                 ch1 = str[i+1];
//                 break;
//            }
//         }

//         cout << "Jsiko 1 me change karna hai : " << ch1 << endl;

//         temp = str;
//         for (char &ch : temp)
//         {
//             if (flag == true)
//             {
//                 if (ch == ch1)
//                 {
//                     ch = '1';

//                 }
//             }
//             else if (flag == false && str[0] != ch1)
//             {
//                 if (ch == ch1)
//                 {
//                     ch = '0';
//                 }
//             }
//         }

//         int minimum = stoi(temp);
//         cout << "Minimum value : " << minimum << endl;

//         return maximum - minimum;
//     }
// };

// int main()
// {
//     Solution s = Solution();

//     // int num = 123456;
//     // int num = 111;
//     // int num = 999;
//     // int num = 100;
//     int num = 9;
//     // int num = 1101057;

//     int ans = s.maxDiff(num);

//     cout << "Result : " << ans << endl;

//     return 0;
// }

#include <iostream>
using namespace std;
// #include<string>

class Solution
{
public:
    int maxDiff(int num)
    {
        string str = to_string(num);
        cout << "Original string : " << str << endl;

        char ch9 = '9';
        for (char ch : str)
        {
            if (ch != '9')
            {
                ch9 = ch;
                break;
            }
        }
        string temp = str;
        cout << "Jsiko 9 me change karna hai : " << ch9 << endl;

        for (char &ch : temp)
        {
            if (ch == ch9)
            {
                ch = '9';
            }
        }

        int maximum = stoi(temp);
        cout << "Maximum value : " << maximum << endl;

        char ch1 = '9';

        bool flag = false;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[0] != '1')
            {
                ch1 = str[0];
                flag = true;
                break;
            }
            else if (str[i] != '1' && str[i] != '0')
            {
                ch1 = str[i];
                break;
            }
        }
         cout << "Jsiko 1  me change karna hai : " << ch1 << endl;

        for (int i = 0; i < str.length(); i++)
        {
            if (flag == true && str[i] == ch1)
            {
                
                    str[i] = '1';
                
            }
            else if(flag == false && str[i]==ch1)
            {
                str[i] = '0';
            }
        }

        int minimum = stoi(str);
        cout << "Minimum value : " << minimum << endl;

        return maximum - minimum;
    }
};

int main()
{
    Solution s = Solution();

    // int num = 123456;
    // int num = 111;
    // int num = 999;
    // int num = 100;
    // int num = 9;
    // int num = 1101057;
    int num ;
    cout<<"Enter the number :";
    cin>>num;

    int ans = s.maxDiff(num);

    cout << "Result : " << ans << endl;

    return 0;
}