#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string replaceSpaces(string &str){

    int n = str.size() , spacecount = 0;

    for(int i = 0; i < n; i++){

        if(str[i] == ' '){

            spacecount++;
        }
    }

    int newsize = n + (spacecount*2);
    str.resize(newsize);
    int i = n - 1 , j = newsize - 1;

    while(i >= 0){

        if(str[i] == ' '){

            str[j] = '0';
            str[j - 1] = '4';
            str[j - 2] = '@';
            j = j - 3;

        }else{

            str[j] = str[i];
            j = j - 1;
        }

        i = i - 1;
    }
    return str;
}

int main(){

    string str = "Hello World !";
    cout<<replaceSpaces(str)<<endl;
}
