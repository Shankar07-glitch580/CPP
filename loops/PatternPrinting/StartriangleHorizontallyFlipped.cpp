#include<iostream>
using namespace std;
// int main(){
//     // method 1
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//    for(int i=1; i<=n; i++){
//     for(int j=1;j<=n+1-i; j++){
//    cout<<"* ";
//     }

//     cout<<endl;
//    } 

// }
// method 2
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     for(int i=n; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;

//     }
// }
// method 3
#include<iostream>
using namespace std;
int main(){
    int  n;
    cout<<"Enter a number:";
    cin>>n;
     int a = n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=a; j++){
            cout<<"* ";
        }
        a--;
        cout<<endl;

    }
}

