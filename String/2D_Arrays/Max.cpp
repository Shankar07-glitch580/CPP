// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     // int arr[3][4];
//     int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,6,4,0}};
//     int max = INT_MIN;
//     for(int i=0; i<3; i++){
//         for(int j=0; j<4; j++){
//            max = std::max(max,arr[i][j]);
//         }
       
//     }
//     cout<<max;
    
// }

  // min element


#include<iostream>
#include<climits>
using namespace std;
int main(){
    // int arr[3][4];
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,6,4,8}};
    int min = INT_MAX;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
           min = std::min(min,arr[i][j]);
        }
       
    }
    cout<<min;
    
}