

#include <iostream>
#include<climits>
#include<vector>
using namespace std;

class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();

        vector<int> prefix(n + 1, 0);
        vector<int> suffix(n + 1, 0);

        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + (customers[i] == 'N' ? 1 : 0);
        }

        cout<<"Printing the prefix : ";
        for(int i =0 ;i<prefix.size();i++){
            cout<<prefix[i]<<" ";
        }
        cout<<endl;

        for (int i = n - 1; i >= 0; i--) {
            suffix[i] = suffix[i + 1] + (customers[i] == 'Y' ? 1 : 0);
        }

         cout<<"Printing the suffix : ";
        for(int i =0 ;i<suffix.size();i++){
            cout<<suffix[i]<<" ";
        }
        cout<<endl;

        int minPenalty = INT_MAX, bestHour = 0;

        for (int i = 0; i <= n; i++) {
            int penalty = prefix[i] + suffix[i];

            if (penalty < minPenalty) {
                minPenalty = penalty;
                bestHour = i;
            }
        }

        return bestHour;
    }
};

int main()
{

    Solution s = Solution();

    string str = "YYNY";

    int result = s.bestClosingTime(str);

    cout << "The result is : " << result << endl;

    return 0;
}