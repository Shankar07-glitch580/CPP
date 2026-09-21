#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "926";
    int n = s.length();
    for(int i=0; i<n; i++){
        string sum = "";
        for(int j=1; j<=n-i; j++){
            cout<<s.substr(i,j)<<" ";
            sum = sum + s.substr(i,j);
        }
          cout<<endl;
            cout<<sum<<endl;
    }
}