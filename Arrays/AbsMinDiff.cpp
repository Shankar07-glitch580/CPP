#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;
int main(){
    int arr[] =  {10, 20, 15, 30, 28};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min = INT_MAX;
    for(int i=0; i<n-1; i++){
       int diff = abs(arr[i]-arr[i+1]);
       if(diff < min){
       min = diff;
       }
    }
     cout<<"Minium Difference = "<<min<<endl;
   
}