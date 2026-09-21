#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "Shubham";
    s.pop_back();
    s.push_back('k');
    cout<<s<<endl;
    // sort(s.begin(),s.end());
    // cout<<s<<endl;
    reverse(s.begin()+1,s.end()-1);
    cout<<s<<endl;
    s.erase(s.find('h'), 1);
    cout<<s<<endl;

}