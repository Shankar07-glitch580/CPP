#include<iostream>
using namespace std;
int  product(int a, int b){
    return a*b;
}

int main(){

//  product(a,b); agar main is block me sirf ye likhunga to kuchh print nhi hoga 
   int x = product(4,11);
     cout<<x<<endl;
}