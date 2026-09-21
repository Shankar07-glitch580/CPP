#include<iostream>
#include<climits>
using namespace std;
int main() {
    int arr[] = {77, 89, 56, 67, 83, 90  };
    int n = sizeof(arr)/4;
     int mx = INT_MIN;
     for(int i=0; i<=n-1; i++){
      if(arr[i] > mx) mx = arr[i];
      
        }
          int smax = INT_MIN;
     for(int i=0; i<=n-1; i++){
      // if(arr[i] > smax && arr[i] != mx) smax = arr[i];
      if(arr[i] == mx) continue;
      if(arr[i]> smax) smax =arr[i];
     }
     cout<<mx<<" "<<smax<<endl;

}

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//    int arr[] = {1,3,5,2,9};
//    int n = sizeof(arr)/4;
//    int max1 = INT_MIN;
//     int max2 = INT_MIN;
//      for(int i=0; i<n; i++){
//           if(max1<arr[i]) max1 = arr[i];
// }
// for(int i=0; i<n; i++){
//     if(max2<arr[i] &&  arr[i] != max1 )
//     max2 = arr[i];
// }
// cout<<max1<<" "<<max2;
// }