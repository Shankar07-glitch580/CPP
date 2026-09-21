#include<iostream>
using namespace std;
int main(){
    int a ,b;
    cout<<"Enter a & b";
    cin>>a>>b;
    if(a==0 || b==0) cout<<"zero";
    else if((a > 0 && b>0)||(a<0 && b<0)) cout<<"positive";
    else cout<<"negative";
}