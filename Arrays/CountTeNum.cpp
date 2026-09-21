
#include<iostream>
using namespace std;
int main(){
int arr[] = {3,9,4,6,8,55,34};
int x;
cout<<"Enter a  number :";
cin>>x;
int n = sizeof(arr)/sizeof(arr[0]);
int count = 0;
for(int i=0; i<n; i++){
  if(arr[i]>x) count++;
}
cout<<count;
}