#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    if(n%5==0 && n%3==0) cout<<"Kushagra";
    else if(n%5==0) cout<<"shankar";
    else if(n%3==0) cout<<"ambika";
    else cout<<"Suman";
}
//     if(n%5!=0 && n%3=0) cout<<"Suman";
//     if(n%5==0 &&n%3!=0) cout<<"Shankar";
//     if(n%5==0 && n%3==0) cout<<"ambika";
//     if(n%3==0 && n%5!=0) cout<<"Kushagra";
// }