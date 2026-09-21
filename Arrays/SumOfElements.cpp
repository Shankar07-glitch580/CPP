#include<iostream>
using namespace std;
int main() {
    int arr[] = {3,5,8,7};
    int n = sizeof(arr)/4;
     int sum = 0;
     for(int i=0; i<=n-1; i++){
        sum = sum+arr[i];
     }
     cout<<sum;

    
}
