#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Shankar Suman";
    int n = s.size();
    for(char ch : s ){
        cout<<ch;
    }
    // for(int i=0; i<n; i++){
    //     cout<<s[i];
    // }
}
