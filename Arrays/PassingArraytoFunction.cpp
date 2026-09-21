#include<iostream>
using namespace std;
  void change(int x[]){  //x[] ke jagah hum y[] bhi likh denge to output par koi change nhi aayega

      x[0] = 20;
  }
     
   
int main() {
    int x[] = {6,1,2};
    change(x);
    cout<<x[0]<<endl;
    
}