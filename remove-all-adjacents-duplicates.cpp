#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string removeDuplicates(string s){

    string ans = "";

    for(char c : s){
      
        if(!ans.empty() && ans.back() == c){

            ans.pop_back();
        }
        else{
            ans.push_back(c);
        }

    }
    return ans;
}

int main(){

    string s = "azxxzy";
    cout<<removeDuplicates(s)<<endl;
}