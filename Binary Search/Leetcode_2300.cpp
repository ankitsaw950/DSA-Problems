// Successful Pairs of Spells and Potions (2300)
// https://leetcode.com/problems/successful-pairs-of-spells-and-potions

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;



vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
{
    int n = spells.size();
    int m = potions.size();
    vector<int> res;

    sort(potions.begin(), potions.end());
    for(int i =0;i<n;i++){
        int low = 0;
        int high = m-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if((long long)spells[i]*potions[mid]>=success){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        res.push_back(m-low);
    }
    return res;
}

int main()
{

    vector<int> spells = {5, 1, 3};
    vector<int> potions = {1, 2, 3, 4, 5};
    long long success = 7;
    vector<int> result = successfulPairs(spells, potions, success);

    cout<<"Pairs: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}