#include<iostream>
#include<deque>
using namespace std;
int main()
{

    deque<int> dq;

    dq.push_back(10); // 10
    dq.push_front(20); // 20 10
    dq.push_back(30); // 20 10 30
    dq.push_front(40); // 40 20 10 30

    cout<< "Deque elements are :";
    for(int x : dq){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<dq.at(1);

return 0;
}


/*

push_front(x)
push_back(x)
pop_front()
pop_back()
front()
back()
size()
empty()
clear()
at(index)
begin() 
end()


*/