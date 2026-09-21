// #include<iostream>
// using namespace std;
// // function ke definition
// int  printHello(){
//   cout<<"hello"<<endl;
//   return 3;
// }
// int main(){
//   // function call / function invoke 
// cout<<printHello()<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int sum(int a, int b){
// return a+b;
// }
// int main(){
//   int a = 5;
//   int b = 45;
// cout<<sum(a,b)<<endl;
// }


// #include<iostream>
// using namespace std;
// int minOfTwo(int a, int b){ // parameters
//   if(a<b){
//     return a;
//   }
//   else return b;
// }
// int main(){
//   int a = 89;
//   int b = 76;
//   cout<<minOfTwo(a,b)<<endl; // (a,b) - arguments
// }

// #include<iostream>
// using namespace std;
// int minOfTwo(int a,int b){
//   return min(a,b);
// }
// int main(){
//   int a = 76;
//   int b = 34;
//   cout<<minOfTwo(a,b)<<endl;
// }

// calculate sum of numbers from 1 to N

// #include<iostream>
// using namespace std;
// int sumN(int n){
//   int sum = 0;
//   for(int i=1; i<=n; i++){
//     sum += i;
//   }
//   return sum;
// }
// int main(){
//   cout<<sumN(5)<<endl;
//    cout<<sumN(10)<<endl;
//   return 0;

// }

// cal N factorial

// #include<iostream>
// using namespace std;
// int factN(int n){
//   int fact = 1;
//   for(int i=1; i<=n; i++){
//     fact *= i;
//   }
//   return fact;
// }
// int main(){
//   cout<<factN(5)<<endl;
//    cout<<factN(10)<<endl;
//   return 0;

// }

// pass by value 

// #include<iostream>
// using namespace std;
// int sum(int a, int b){
//   a += 10; // a = 15
//   b += 10;  // b = 16
//   return a+b; // sum = 31
// }
// int main(){
//   int a = 5;
//   int b = 6;
//   cout<<sum(a,b)<<endl;
//   cout<<a<<endl;
//   cout<<b<<endl;

//   return 0;
// }


// #include<iostream>
// using namespace std;
// void  change(int x){
//   x = 2*x;
//   cout<<"x = "<<x<<endl;
// }
// int main(){
//   int x = 5;
//   change(x);
//   cout<<"x = "<<x<<endl;
//   return 0;
// }

// cal sum of digits of a number 

// #include<iostream>
// using namespace std;
// int sumOfDigit(int n){
//   int digitSum = 0;
//   while(n > 0){
//     int lastDigit = n%10;
//     n = n/10;
//     digitSum += lastDigit;
//   }
//   return digitSum;
// }
// int main(){
//   int n ;
//   cout<<"enter a number";
//   cin>>n;
//   cout<<sumOfDigit(n)<<endl;
  
// }

// calculate nCr binomial coefficient for n & r

#include<iostream>
using namespace std;
int fact(int n){
  int fact = 1;

  for(int i=1; i<=n; i++){
    fact *= i;
  }
  return fact;
}
int nCr(int n, int r){
  int fact_n = fact(n);
  int fact_r = fact(r);
  int fact_nmr = fact(n-r);
   return fact_n/(fact_r*fact_nmr);
}
int main(){
  int n = 6;
  int r = 3;
  cout<<nCr(n,r)<<endl;
  return 0;

}