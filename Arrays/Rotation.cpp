#include<iostream>
#include<algorithm>
using namespace std;
void reverse(int arr[], int i, int j){
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 2, y = 1;
    int k = (x-y)%n;
        reverse(arr,0,n-1);
        reverse(arr,0,k-1);
        reverse(arr,k,n-1);
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
    
}