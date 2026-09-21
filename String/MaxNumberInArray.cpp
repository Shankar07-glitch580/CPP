#include<iostream>
#include<string>
#include<climits>
#include<vector>
using namespace std;
string biggerNumber(string s1, string s2){
    int i=0;
   while(i < s1.length() && s1[i] == '0') i++;
    int  s1_Real_length = s1.length() - i;
     int j=0;
    while(j < s2.length() && s2[j] == '0') j++;
    int  s2_Real_length = s2.length() - j;
    if(s1_Real_length != s2_Real_length){
    if(s1_Real_length > s2_Real_length) return s1;
    if(s2_Real_length > s1_Real_length) return s2;
    while(i < s1.length() && s1[i] == s2[j]){
        i++;
        j++;
    }
    if(i==s1.length()) return s1; // s1 and s2 are same numbers
    if(s1[i] > s2[j]) return s1;
    else return s2;

    }
}
int main(){
    vector<string> arr = {"0123","0023","456","00182","2901"};
    string max = arr[0];
    int m = arr.size();
    for(int i=0; i<m; i++){
        max = biggerNumber(arr[i],max);

        // if(stoi(arr[i]) > stoi(max)) max = arr[i];
      
    }
    cout<<max<<endl;

}