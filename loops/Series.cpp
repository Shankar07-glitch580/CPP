// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number:";
//     for (int big = n, small = 2; big > small; big--, small++){
//     cout<<big<<" ";
//     cout<<small<<" ";
//     }
    
// }
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int big = n, small = 2; big > small; big--, small++) {
        cout << big << " ";
        cout << small << " ";
    }

    if (n % 2 == 0) {
        cout << n / 2 + 1;
    }

}
