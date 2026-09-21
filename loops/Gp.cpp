#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter numbers of terms:";
    cin>>n; 
    // 1 2 4 8.....uo to n
      int a = 1 , r =2;
    for(int i=1; i<=n;i++){ // n times loop chalega
         cout<<a<<" ";
         a *= r;
    }
}