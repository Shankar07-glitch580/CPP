
#include<iostream>
using namespace std;
int main(){
    int arr[] = {7,8,3,5,84,34,99};
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

