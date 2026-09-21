#include<iostream>
#include<vector>
using namespace std;
bool isTeoplitz(vector<vector<int>>& arr, int m ,int n){
    for(int i=1; i<m; i++){
        for(int j=1; j<n; j++){
            if(arr[i][j] != arr[i-1][j-1]) return false;
        }
    }
    return true;
}
int main(){
    vector<vector<int>> arr  = {{1,2,3,4},{5,1,2,3},{9,5,1,2}};
    cout<<isTeoplitz(arr,3,4)<<endl;
}