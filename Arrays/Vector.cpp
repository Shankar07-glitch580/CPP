#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; // empty vector
    vector<int> arr(5,-2);  // index 0 to 4
    int n = arr.size();
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.push_back(5); // adds an element at  end
    arr.push_back(14);
    arr.pop_back(); // removes last element
    arr.push_back(7);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
}
}