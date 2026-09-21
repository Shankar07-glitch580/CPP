#include<iostream>
#include<climits>
using namespace std;
int main() {
    int arr[] = {77, 89, 56, 67, 83, 90  };
    int n = sizeof(arr)/4;
     int min = INT_MAX;
     for(int i=0; i<=n-1; i++){
        if(arr[i] < min) min = arr[i]; 
        }
    
     cout<<min;

    
}