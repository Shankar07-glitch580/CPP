
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int countdigit = 0;
    // int countdigit = 0;
    // while(n>0){
    //   countdigit++;
    //   n = n/10;
    for(countdigit=0; n>0; countdigit++){
      n=n/10;
    }
    cout<<countdigit;
}
