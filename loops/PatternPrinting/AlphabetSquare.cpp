#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"enter a number :";
     cin>>n;
    for(int i=1; i<=n; i++){
         for(int j=1; j<=n; j++){ // for(int j=65;j<=n+64)
         cout<<(char)(i+64)<<" "; // cout<<(char)(j)<<" ";
        }
        cout<<endl;
    }


}