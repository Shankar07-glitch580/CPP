#include<iostream>
using namespace std;
int main(){
    int a=8, b=7;
    cout<<a<<" "<<b<<endl;
    cin>>a>>b;
    a=b;
    b=a;
    cout<<a<<" "<<b<<endl;
}