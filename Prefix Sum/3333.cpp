// 3333. Find the Original Typed String II


#include<iostream>
using namespace std;


class Solution {
public:
int M = 1e9+7;
    int possibleStringCount(string word, int k) {

        if(word.size()==k){
            return 1;
        }
        
         int result = 0;

        for (int i = 1; i < word.size(); i++) {
            if (word[i] == word[i - 1]) {
                result = result + 1;
            }
        }

        return (result + 1)%M;
    }
};


int main(){
    Solution s = Solution();
    
    string word = "aabbccdd";
    int k = 7;

    int result = s.possibleStringCount(word,k);

    cout<<"The Result is : "<<result<<endl;
}