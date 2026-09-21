#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter a number:";
    cin>>n;
    int i;
    // method 1
//         for(int i = 1; i <= n; i++){

//     // Spaces
//     for(int j = 1; j <= i-1; j++){
//         cout << "  ";
//     }

//     // Stars
//     for(int j = 1; j <= 2*(n-i)+1; j++){
//         cout << "* ";
//     }

//     cout << endl;
// }
int nsp = 0, nst = 2*n-1;
    for(int i=1;i<=n; i++){
       for(int j=1; j<=nsp; j++){ // spaces
             cout<<"  ";
       }
       for(int j=1; j<=nst; j++){
        cout<<"* ";
       }
       nsp++;
       nst -= 2;
       cout<<endl;
    }
    
}

