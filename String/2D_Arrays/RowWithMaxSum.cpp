#include<iostream>
#include<climits>
using namespace std;
int main(){
    // int arr[3][4];
    int arr[3][4] = {{1,112,3,4},{5,96,7,8},{9,6,4,0}};
    int maxRow = -1, maxSum = INT_MIN;  // int maxRow = -1 because Abhi tak koi row maximum nahi mili
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<4; j++){
           sum += arr[i][j];
        }
        if(sum > maxSum){
            maxSum = sum;
            maxRow = i;
        }
       
    }
    cout<<maxRow<<" "<<maxSum;
   
}

