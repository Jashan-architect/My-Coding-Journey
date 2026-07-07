#include<iostream>
#include<string>
using namespace std;

int lengthoflastword(string s){

    int i = s.size() - 1 , count = 0;

    while(i >= 0 && s[i] == ' '){
        i--;
    }

    while(i >= 0 && s[i] != ' '){
        count++;
        i--;
    }

    return count;
}

int main(){

    string s = "Hello World  ";
    int ans = lengthoflastword(s);
    cout<<ans<<endl; 
    
}