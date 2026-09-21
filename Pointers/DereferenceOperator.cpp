#include<iostream>
using namespace std;
int main(){
    int x = 7;
    int* ptr = &x;
    *ptr += 8; // x = 10 hi hoga
    cout<<x<<endl;
    // int x = 5;
    // int* ptr = &x;
    // cout<<*ptr<<endl;
}