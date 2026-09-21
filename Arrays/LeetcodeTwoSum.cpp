#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,4,5,6,7,9};
    int n = sizeof(arr)/4;
    // int n = sizeof(arr) / sizeof(arr[0]);
    int target = 13;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j] == target){
              cout << i << " " << j << endl;
                return 0;
            }
        }
    }
    return 0;
}
