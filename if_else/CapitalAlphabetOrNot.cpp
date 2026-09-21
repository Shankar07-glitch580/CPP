#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character:";
    cin>>ch;
    if(ch >= 'A'&& ch <= 'Z')   cout<<"capital letter";
    else if(ch >= 'a'&& ch <= 'z') cout<<"small letter";
    else cout<<"not an alphabet";

    
}