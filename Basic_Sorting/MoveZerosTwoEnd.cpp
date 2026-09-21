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
    vector<int> arr = {5,0,4,0,6,0,2,1,0};
    int n = arr.size();
     print(arr);
     for(int j=0; j<=n-1; j++){  // n-1
          for(int i=0; i<arr.size()-1; i++){
            if(arr[i] == 0) {
                swap(arr[i],arr[i+1]);
            }
  
    }
  }
    print(arr);
  }
