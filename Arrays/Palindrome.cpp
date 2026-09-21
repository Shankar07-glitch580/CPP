#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool ispalindrome(vector<int> &arr, int n){
    int i = 0, j = n-1;
    while(i<j){
        if(arr[i] != arr[j]) return false;
        i++;
        j--;

    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(ispalindrome(arr,n)) cout<<"Palindrome"<<endl;
    else cout<<"Not palindrome"<<endl;

}