#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter string:";
    getline(cin,s);
    int n = s.length();
    cout<<s.substr(5)<<endl;
    // cout<<s.substr(2,4)<<endl;
    // cout<<s.substr(2)<<endl;

}