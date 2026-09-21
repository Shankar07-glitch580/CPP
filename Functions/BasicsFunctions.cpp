#include<iostream>
using namespace std;
void  priyanka(){
    cout<<"Shankar is brilliant boy"<<endl;

}
void  suman(){
     priyanka();
    cout<<"Hi suman"<<endl;
}
void  aruna(){
    cout<<"Hi aruna"<<endl;
    suman();

}
int main(){
    aruna();
    
   

}

   
