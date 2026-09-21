#include<iostream>
#include<vector>
using namespace std;
bool isStrictlyIncreasing(vector<vector<int>>& arr, int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n-1; j++){
          if(arr[i][j] >= arr[i][j+1])
            return false;
        }
    }
    return true;
}
int main(){
  vector<vector<int>> arr = {{1,0,9},{2,9,4}};
  cout<<isStrictlyIncreasing(arr,2,3)<<endl;

}