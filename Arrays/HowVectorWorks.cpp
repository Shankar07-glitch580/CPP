#include<iostream>
#include<vector>
using namespace std;

 int main(){ 
    
    vector<int> v;
    v.push_back(5);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(6);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(7);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(8);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.pop_back();
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.pop_back();
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<v.size()<<" "<<v.capacity()<<endl;

//     vector<int> v;
//     v.push_back(5);
//     v.push_back(6);
//     v.push_back(7);
//     v.push_back(8);
//     v.push_back(9);
//     v.push_back(10);
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
}