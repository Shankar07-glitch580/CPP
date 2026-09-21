#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v = {4,7,4,7,3}; // 3 4 4 7 7
    sort(v.begin()+1,v.end()-1);
    for(int ele : v) cout<<ele<<" ";
}