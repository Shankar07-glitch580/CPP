#include<iostream>
using namespace std;
int main(){
    // int arr[3][4];
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,6,4,0}};
    // int n = sizeof(arr)/4;
    int sum = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
            sum += arr[i][j];
        }
        cout<<endl;
    }
    cout<<sum;
    
}