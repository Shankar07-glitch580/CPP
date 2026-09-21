#include<iostream>
using namespace std;
void fun(){
    cout<<"hi"<<endl;
}
void fun(int ){
 cout<<"good morning"<<endl;
 // this will give error
// void fun(int x = 7){
//     cout<<"good morning"<<endl;
}
void fun(int x, int y){
    cout<<"good evening"<<endl;
}
int main(){
    fun(); // eror
    
   
}