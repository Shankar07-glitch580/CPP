#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int count=0;
    if(n==0) count++;
    // if(n < 0) n = -n;
    while(n != 0){ 
        n /= 10;
        count++;
    }
    cout<<count;

}