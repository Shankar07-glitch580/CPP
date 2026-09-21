#include<iostream>
#include<vector>
using namespace std;

// method 1


void oddAndeven(vector<int> &arr){
    int even = 0, odd = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]%2 == 0) even++;
        else
            odd++;
    }
       cout<<"even = "<<even<<endl;
       cout<<"odd = "<<odd<<endl;

    
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    oddAndeven(arr);
 
}

// method 2

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number:";
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int even = 0, odd = 0;
//     for(int i=0; i<n; i++){
//         if(arr[i]%2 == 0) 
//          even++;
//          else
//              odd++;
//     }
//    cout<<"even = "<<even<<endl;
//    cout<<"odd = "<<odd<<endl;
// }
