#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[3][4] = {{1,112,3,4},{5,96,7,8},{9,6,4,0}};
        for(int i=0; i<3; i++){
            if(i%2 == 0){
                for(int j=0; j<4; j++){
                 cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=3; j>=0; j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }    
}    

