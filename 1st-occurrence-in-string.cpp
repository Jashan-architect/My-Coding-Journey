#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int strStr(string haystack, string needle){

    int n = haystack.size() , m = needle.size();
    
    if(m > n) return -1;

    for(int i = 0; i <= n - m; i++){

        if(haystack.substr(i , m) == needle) return i;

    }
    return -1;
}

int main(){

    string haystack = "sadbutsad";
    string needle = "sad";

    cout<<strStr(haystack , needle)<<endl;
    return 0;
}