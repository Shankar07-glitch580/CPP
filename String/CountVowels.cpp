#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string:";
    cin>>str;
    int vowelCount = 0;
    int consonantCount = 0;

    for(int i=0; i< str.length(); i++){
        // Uppercase ko lowercase me convert karo
        if(str[i]>=65 && str[i]<=90){
             str[i] += 32;
        }
    
       if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i]== 'u') {
            vowelCount++;
        }
        else{
             consonantCount++;
        }
    }
        cout << "Vowels = " << vowelCount << endl;
        cout << "Consonants = " << consonantCount << endl;
    }
    

