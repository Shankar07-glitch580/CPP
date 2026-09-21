#include<iostream>
using namespace std;
void swap(int* a, int* b){ // yaha int* p1 , int* p2 bhi likh sakte hai 
    int temp = *a; // p1;
    *a = *b; // p1 = p2;
    *b = temp; // p2 = temp;
}
int main(){
    int a = 5, b = 2;
    // swap(a,b); // built in function
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
}
