#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string reverseWords(string s){

    int n  = s.length();
    int i = n - 1;
    string ans = "";

    while(i >= 0){

        while(i >= 0 && s[i] == ' '){
            i--;
        }

        if(i < 0) break;

        int j = i;
        
        while(i >= 0 && s[i] != ' '){
            i--;
        }

        string word = s.substr(i + 1 , j - i);

        if(ans.length() == 0){
            ans += word;
        }else{

            ans += " " + word;
        }
    }
    return ans;
}

int main(){

    string s = "the sky is blue";

    cout<<reverseWords(s)<<endl;
    return 0;
}