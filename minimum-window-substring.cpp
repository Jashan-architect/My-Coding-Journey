#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

string minWindow(string s, string t){

    if(t.length() > s.length()) return "";

    string ans = "";
    int i = 0; // baade waale string ka
    int j = 0;// chote waale string ke liye
    
    int freqCount[256] = {0};

    for(char x : t){
        freqCount[x]++;
    }

    int count = t.length(); int start = -1; int minimum_length = 1e9;

    while(i < s.length()){

        if(freqCount[s[i]] > 0){
            count--;
        }
        freqCount[s[i]]--;
        i++;

        while(count == 0){

            if(i - j < minimum_length){
                minimum_length = i - j;
                start = j;
            }

            freqCount[s[j]]++;
            
            if(freqCount[s[j]] > 0){
                count++;
            }

            j++;
        }
    }
    return(start == -1) ? "" : s.substr(start , minimum_length);
}

int main() {
    
    string s = "ADOBECODEBANC";
    string t = "ABC";

    cout<<minWindow(s , t)<<endl;

    return 0;
}