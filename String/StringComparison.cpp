#include<iostream>
#include<string>
using namespace std;
int main(){
    string x = "abc";
    string y = "xyz";
    cout<<(x==y)<<endl;
    if(x==y) cout<<"same"<<endl;
    else cout<<"not same"<<endl;

    if(x>y) cout<<x<<"is greather than"<<y<<endl;
    else cout<<y<<"is greather than"<<x<<endl;
}