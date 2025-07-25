#include <iostream>
#include <string>

using namespace std;

int main(){
    char ch = '1';
    // cout<<(int)ch;

    int val = ch-'0';
    cout<<val;
}











// int main()
// {
//     string s = "LearnCoding1";

//     // for(int i =0 ;i<s.length();i++){
//     //     cout<<s[i]<<" ";
//     // }

//     // for(char ch : s){
//     //     cout<<ch <<" ";
//     // }

//     // int i = 0;
//     // while (s[i] != '\0')
//     // {
//     //     cout << s[i] << " ";
//     //     i= i+2;
//     // }

//     // cout << endl;
// }

// int main(){

// string s = "LearnCoding";
// string s;

// Length of the string
//   length() ,size()

// int val = s.length();
// int val = s.size();
// cout<<"the length of the string is : "<<val;

// to check whether a string is empty or not  -> empty()
// cout<<s.empty();

// we can add characters string in the back side
// s.push_back('C');
// cout<<s<<endl;

// s.pop_back();
// cout<<s<<endl;

// append

// string s1 = "Learn";
// cout<<s1<<endl;

// s1.append("Coding");
// cout<<s1<<endl;

// cout<<s1.substr(5,0);

//     string  s = "learnarn";

//     int num = s.find("le");

//     if(num==string::npos){
//         cout<<"The substring is not present in the string"<<endl;
//     }else{
//         cout<<num;
//     }

// }

// int main()
// {
//     string name = "Ankit";
//     string s;

//     cout<<"Input the string : ";
//     // cin>>s;
//     getline(cin,s);

//     cout<<s;

//     // s = "ankit";

//     // // cout << s;
//     // // cout << endl;
//     // // cout << name;

//     // char ch[]="ankit";

//     // cout<<ch[4];

//     return 0;
// }
