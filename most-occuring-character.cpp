#include<iostream>
#include<string>
using namespace std;

char getMaxOccuringChar(string& s){
    int arr[26] = {0};

    for(int i = 0; i < s.size(); i++){

        char c = s[i];
        int nmuber = c - 'a';
        arr[nmuber]++;

    }

    int maxans = -1 , ansindex = 0;

    for(int i = 0; i < 26; i++){

        if(arr[i] > maxans){

            maxans = arr[i];
            ansindex = i;
        }
    }
    return 'a' + ansindex;
}

int main(){

    string s = "jashan";
    
    cout<<"most occuring character is: "<<getMaxOccuringChar(s)<<endl;
}
       