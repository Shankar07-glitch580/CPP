#include<iostream>
#include<string>
using namespace std;
int main(){
    // string s1 = "abc";
    // string s2 = "xyz";
     string s1 = "111";
     string s2 = "333";
     string s3 = s1+s2;
     cout<<s3<<endl;

     string  s = "abc";
    // string x = s + 4;  // error
     string x = s + '4';  // here '4' is a Character
     string x1 = '4' + s;
    cout<<x<<endl;
    cout<<x1<<endl;

    string s4 = "Shankar";
    s4 += "Suman";
    cout<<s4<<endl;
} 