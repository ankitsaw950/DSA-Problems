#include <iostream>
using namespace std;
#include <queue>
#include <algorithm>
#include <math.h>
#include <vector>

long long pickGifts(vector<int> &gifts, int k)
{
    priority_queue<int> pq(begin(gifts), end(gifts));

    long long sum = 0;

    for (int &gift : gifts)
    {
        sum += gift;
    }

    long long mySum = 0;

    while(k--){
        int maxEl = pq.top();
        pq.pop();

        int remaining = sqrt(maxEl);
        pq.push(remaining);

        mySum += maxEl - remaining;
    }

    return sum - mySum;
}
int main()
{
    // vector<int> gifts = {25, 64, 9, 4, 100};
    vector<int> gifts = {1,1,1,1};

    long long finalResult = pickGifts(gifts, 4);

    cout << "The final lefts gifts are : " << finalResult << " .\n";

    return 0;
}