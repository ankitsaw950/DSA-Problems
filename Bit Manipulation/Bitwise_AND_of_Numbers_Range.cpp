#include<iostream>
using namespace std;

int rangeBitwiseAnd(int left, int right) {
        int result = left;

        for(int i = left+1;i<=right;i++){
            result &=i;
        }

        return result;
    }
int main()
{
    int left = 5;
    int right = 7;
    cout<<rangeBitwiseAnd(left,right);

return 0;
}