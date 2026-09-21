#include<iostream>
#include<climits>
using namespace std;
int main() {
    int arr[] = {77, 89, 56, 67, 83, 90  };
    int n = sizeof(arr)/4;
     int mx = INT_MIN;
     for(int i=0; i<=n-1; i++){
        // if(arr[i] > mx) mx = arr[i];
        mx = (mx,arr[i]);
        }
    // int max = arr[0];
    //  for(int i=0; i<=n-1; i++){
    //     if(arr[i] > max) max = arr[i];
    //  }
     cout<<mx;

    
}