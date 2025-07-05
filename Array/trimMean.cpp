// leetcode : 1619

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

class Solution
{
public:
    double trimMean(vector<int> &arr)
    {
        int n = arr.size();
        sort(begin(arr), end(arr));
        int remove = n * 0.05;

        cout << "Removing elment count :" << remove << endl;
        cout << "Total elment count :" << n << endl;

        double sum = 0;
        cout<<"First index : "<<remove<<endl;
        cout<<"last index : "<<(n - remove)<<endl;

        for (int i = remove; i < n - remove; i++)
        {
            sum += arr[i];
        }

        return sum / (n - 2 * remove);
    }
};

int main()
{

    Solution s = Solution();

    vector<int> arr = {6,0,7,0,7,5,7,8,3,4,0,7,8,1,6,8,1,1,2,4,8,1,9,5,4,3,8,5,10,8,6,6,1,0,6,10,8,2,3,4};
    double ans = s.trimMean(arr);

    cout << "Ans is : " << ans << endl;
    return 0;
}