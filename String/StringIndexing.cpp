#include<iostream>
#include<string>
using namespace std;
int main(){
      string s = "Shankar Suman";
      cout<<s.length()<<endl;  // s.size() bhi likh sakte hain 
      cout<<s.size()<<endl;
      cout<<s[1]<<endl;
      s[0] = 'm';
      cout<<s<<endl;
}
