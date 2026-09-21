#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// void change(vector<int> v){  // pass by value
//     v[2] = 99;
void change(vector<int>& v){  // pass by reference
    v[2] = 99;
}
int main(){
    vector<int> v = {4,7,4,7,3,9}; 
    change(v);
    cout<<v[2]<<endl;
}