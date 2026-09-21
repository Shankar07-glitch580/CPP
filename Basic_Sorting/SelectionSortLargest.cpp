#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &arr){
    for(int ele: arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr = {5,4,3,6,2,1};
    int n = arr.size();
     print(arr);
     // selection sort
     for(int j=0; j<n-1; j++){
        int max = arr[j], maxIdx = j;
        for(int i=j; i<n; i++){
            if(arr[i]<max){
                 max = arr[i];
                maxIdx = i;
            }  
        }
          swap(arr[j], arr[maxIdx]);
     }
     print(arr);


}