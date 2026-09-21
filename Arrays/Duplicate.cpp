#include<iostream>
using namespace std;
int main(){
  int arr[] = {2,4,7,5,1,7};
  int n = sizeof(arr)/sizeof(arr[0]);
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(arr[i]==arr[j]){
       cout<<"Duplicate";
      return 0;
      }
    }
  }
    cout<<"No dulpicate";
    return 0;

}