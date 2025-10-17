#include <iostream>
#include <queue>
using namespace std;

int largestInteger(int num)
{
    priority_queue<int> odd;
    priority_queue<int> even;

    string nums = to_string(num);
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int digit = nums[i] - '0';
        if (digit % 2 == 0)
        {
            even.push(digit);
        }
        else
        {
            odd.push(digit);
        }
    }
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans * 10;

        if ((nums[i] - '0') % 2 == 0)
        {
            ans += even.top();
            even.pop();
        }
        else
        {
            ans += odd.top();
            odd.pop();
        }
    }
    return ans;
}
int main()
{

    int result = largestInteger(1234);
    cout << "Final result : " << result << endl;

    return 0;
}