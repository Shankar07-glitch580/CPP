#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,1,0,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = INT_MIN;
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==1) {
        count++;
        }
        else{
            count = 0;
        }
       if(max<count){
        max = count;
       }
    }
    cout<<max;
}