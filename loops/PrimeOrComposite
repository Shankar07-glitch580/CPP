#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number:";
    cin>>n;
    bool flag = false; // false means prime 
    for(int i=2; i<=sqrt(n);i++){ // i*i<=n;
      if(n%i==0){ // factor mil gaya expect 1 and n;
       flag = true; // true means composite
       break;
      }  
    }
    if(n==1) cout<<"Neither prime nor composite";
    else if(flag==true) cout<<"Composite Number";
    else cout<<"Prime Number";
}