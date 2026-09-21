#include<iostream>
using namespace std;
int main(){

    int l, area,perimeter;
    cout<<"enter length:";
    cin>>l;
    int b;
    cout<<"enter breadth:";
    cin>>b;
    area = l*b;
    cout<<"area is:";
    cout<<area<<endl;
    perimeter = 2*(l+b);
    cout<<"perimeter is:";
    cout<<perimeter<<endl;
    if(area>perimeter) cout<<"Area is greater than perimeter";
    else cout<<"Area is not greater than perimeter";
}