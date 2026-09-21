#include<iostream>
using namespace std;
void countdigits(int n, int* ptr){
    int count =  (n==0) ? 1 : 0;
        while(n != 0){
            count++;
            n /= 10;
        }
        *ptr =  count;
    }
int main(){
        int n;
        cin>>n;
       int  c = 0; 
       countdigits(n,&c);
       cout<<c;
}