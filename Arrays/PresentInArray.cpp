#include<iostream>
using namespace std;
int main(){
    int arr[] = {67, 67, 67, 89, 45, 98, 39, 87}; 
    int n = sizeof(arr)/4;
    int target = 7;
    bool flag = false; // false means not present
    for(int i=0; i<=n-1; i++){
        if(arr[i] == target) {
       flag = true ; // true means present
       break;
        }

    }
    if(flag == true) cout<<"element found"<<endl;
     else  cout<<"Element not Found"<<endl;
}