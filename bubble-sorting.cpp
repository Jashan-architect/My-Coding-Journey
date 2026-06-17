#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int al[5] = {1 , 3 , 2 , 5 , 4} , n = 5;

    for(int i = 0; i < n - 1; i++){
        
        for(int j = 0; j < n-i-1; j++){

            if(al[j] > al[j + 1]){

                swap(al[j + 1],al[j]);

            }
        }

    }

    for(int i = 0; i < n; i++){
        cout<<al[i]<<" ";
    }
}