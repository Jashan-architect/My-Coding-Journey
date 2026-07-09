#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string removeOccurrences(string s, string part){

    while(s.size() != 0 && s.find(part) != string::npos){

        s.erase(s.find(part) , part.length());
    }
    return s;
}

int main(){

    string s = "daabcbaabcbc";
    string part = "abc";

    cout<<removeOccurrences(s , part)<<endl;
}