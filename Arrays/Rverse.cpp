
#include<iostream>
using namespace std;
int main(){
  int arr[] = {1,5,3,8,6};
  int n = sizeof(arr)/4;
  int i=0, j=n-1;
  while(i<j){
    swap(arr[i],arr[j]);
    i++;
    j--;

  }
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
}