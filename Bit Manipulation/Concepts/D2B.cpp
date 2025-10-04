// Coverting decimal to binary

#include<iostream>
#include<algorithm>
using namespace std;

string Decimal2Binary(int n){
    string res="";

    while(n>0){
        if(n%2==1){
            res+='1';
        } else{
            res+='0';
        }
        n=n/2;
    }

    cout<<"The binary number is: "<<res<<endl;
    reverse(res.begin(),res.end());

    return res;
}
int main()
{
    string ans = Decimal2Binary(16);
    cout<<ans;

return 0;
}