#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isSubsequence(string s, string t){

    if(s.length() > t.length()){
        return false;
    }

    int j = 0;
    for(int i = 0; i < t.length(); i++){

        if(j < s.length() && s[j] == t[i]){
            j++;

        }
        
    }
    return j == s.length();
}

int main(){

    string s = "abc";
    string t = "ahbgc";

    cout<<isSubsequence(s , t)<<endl;
}