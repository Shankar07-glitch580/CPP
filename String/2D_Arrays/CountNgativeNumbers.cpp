#include<iostream>
#include<vector>
using namespace std;
int  countNegativeNums(vector<vector<int>>& arr, int m, int n){
    int count = 0;
    int rows = m-1;
    int col = 0;
    while(rows >= 0 && col < n){
        if(arr[rows][col] < 0){
        count += n-col;
        rows--;
        }
        else{
            col++;
        } 
    }    

    return count++;
}
int main(){
    vector<vector<int>> arr = {
                            {4, 3, 2, -1},
                             {3, 2, 1, -1},
                             {1, 1, -1, -2},
                             {-1, -1, -2, -3}
                            };
    cout<<countNegativeNums(arr,4,4)<<endl;
}