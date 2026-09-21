#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    //(n%2==0)?cout<<"even":cout<<"odd"; // ye sirf c ya c++ me chalega
    cout<<((n%2 == 0)?"even" : "odd");  // ye c++, java and aur bhi dusre language me chalega
    
 }