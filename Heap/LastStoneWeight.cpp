#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int lastStoneWeight(vector<int> &stones)
{
    priority_queue<int> pq(begin(stones), end(stones));

    while (!pq.empty())
    {
        if (pq.size() == 1)
        {
            return pq.top();
        }

        int y = pq.top();
        pq.pop();
        int x = pq.top();
        pq.pop();
        cout << "Hello \n";

        if (x == y)
        {
            cout<<"Equal\n";
            continue;
        }
        else
        {
            cout << x << " and " << y << endl;
            pq.push(y - x);
        }
    }

    return 0;
}

int main()
{

    vector<int> stones = { 1,1,1,1};

    int result = lastStoneWeight(stones);
    cout << "Result is : " << result << " ." << endl;
}