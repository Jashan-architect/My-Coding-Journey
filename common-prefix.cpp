#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs){

    if(strs.empty()) return "";

    string first = strs[0];
    for(int i = 0; i < first.size(); i++){

        char ch = first[i];
        for(int j = 1; j < strs.size(); j++){

            if(i >= strs[j].length() || strs[j][i] != ch){

                return first.substr(0 , i);
            }
        }
    }
    return first;
}

int main(){

    vector<string> strs = {"flower" , "flow" , "flight"};
    cout<<longestCommonPrefix(strs)<<endl;
}