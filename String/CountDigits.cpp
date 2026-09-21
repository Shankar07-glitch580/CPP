#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
   string s = to_string(abs(n));
    cout<<s.length()<<endl;
    
}