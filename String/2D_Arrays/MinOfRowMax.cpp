#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[3][4] = {{1,112,3,4},{5,96,7,8},{9,6,4,0}};
    int min = INT_MAX;
    for(int i=0; i<3; i++){
        int  rowMax = INT_MIN;
        for(int j=0; j<4; j++){
            if(arr[i][j] > rowMax)
                 rowMax = arr[i][j];
        }
         if(rowMax < min)
                min = rowMax;
   
    }
        cout<<min;
   
}

