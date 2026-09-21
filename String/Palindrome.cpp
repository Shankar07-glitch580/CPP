#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter string";
    cin>>s;
    int i = 0;
    int j = s.length()-1;
    while(i<j){
        if(s[i] != s[j]){
            cout<<" not Palindrome";
            return 0;
        }
        i++;
        j--;   
    }
    cout<<"palindrome";
    return 0;
}