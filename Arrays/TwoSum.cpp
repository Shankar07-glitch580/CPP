#include<iostream>
#include<vector>
using namespace std;
int main(){
  int arr[] = {2,4,7,5,1};
  int n = sizeof(arr)/sizeof(arr[0]);
  int target = 6;
  int x = -1, y = -1;  // x aur y me pair ke index store karenge
                      // -1 ka matlab: abhi pair nahi mila


  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(arr[i]+arr[j] == target){
        x = i;
        y = j;
      }
    }
  }
  cout<<x<<" "<<y;
}