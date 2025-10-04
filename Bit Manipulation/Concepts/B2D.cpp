// Coverting binary to decimal

#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int Binary2Decimal(string x){
  
    int n = x.length();
    int res = 0;
    for(int i = 0; i < n; i++){
        if(x[i] == '1'){
            res += pow(2, n-1-i);
        }
    }
    return res;
}
int main()
{
   

return 0;
}