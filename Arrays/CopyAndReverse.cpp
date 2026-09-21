#include<iostream>
using namespace std;
int main(){
  int arr1[5] = {1,3,5,7,9};
   int n = sizeof(arr1)/sizeof(arr1[0]);
   int arr2[5];
   for(int i=0; i<n; i++){
    arr2[i] = arr1[n-1-i];
   }
   for(int i=0; i<n;i++){
    cout<<arr2[i]<<" ";
   }
}
