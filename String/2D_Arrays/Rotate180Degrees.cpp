#include<iostream>
#include<vector>
using namespace std;
void rotate_180(vector<vector<int>>& arr, int n){
    int i=0;
    int j = n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0; i<n; i++){
        int start = 0; 
        int end = n-1;
        while(start < end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end --;
        }
    }
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
    cout<<"Enter a Array:"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    rotate_180(arr,n);
    cout<<"matrix after 180 degree rotation:"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}