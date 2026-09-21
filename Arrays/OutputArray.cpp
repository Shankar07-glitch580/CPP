#include<iostream>
#include<iterator>
using namespace std;
int main() {
    // int arr[10] = {}; // Default 0
     int arr[] = {74,96,91,63,8,99,38,77};
    int n = sizeof(arr) / sizeof(arr[0]);     // int n = sizeof(arr)/4;
    for(int i =0; i<=n-1; i++){ // 0 to n-1
        cout<<arr[i]<<" ";
    }
}