#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void reverse(char name[] , int n){

    int s = 0 , e = n - 1;
    while(s<e){
        swap(name[s++] , name[e--]);
    }
}

int length(char name[]){
    int count = 0;

    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){

    char name[] ="hello";

    int n = length(name);

    reverse(name , n);
    for(int i = 0; i < n; i++){
        cout<<name[i];
    }
    cout<<endl;
}