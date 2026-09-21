#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {4,7,4,7,3};
    // multiply even num by 2, square the odd numbers

    for(int i=0; i<v.size(); i++){
        if(v[i]%2 == 0) v[i] *=2;
        else v[i] *=v[i];
    }
    // }
   for(int ele : v){
    cout<<ele<<" ";
   }
}