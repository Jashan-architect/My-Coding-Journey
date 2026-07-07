#include<iostream>
#include<string>
#include<cctype>
using namespace std;

bool isPalindrome(string s){
    
    int i = 0 , j = s.size() - 1;

    while(i <= j){

        if(!isalnum(s[i])){
            i++;
            continue;
        }
        if(!isalnum(s[j])){
            j--;
            continue;
        }
        if(tolower(s[i]) != tolower(s[j])){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){

    string s = "Abc;Cba";

    if(isPalindrome(s)){

        cout<<"it's a palindrome"<<endl;
    }
    else{
        cout<<"it's not a palindrome"<<endl;
    }
   
}
