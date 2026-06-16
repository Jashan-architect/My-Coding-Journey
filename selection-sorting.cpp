#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int al[5] = {6 , 2 , 8 , 4 , 10} , n = 5;

    for(int i = 0; i < n- 1; i++){

        int indexcount = i;

        for(int j = i + 1; j < n; j++){

            if(al[j] < al[indexcount]){

                indexcount = j;
            }

        }
        swap(al[indexcount] , al[i]);
    }

    for(int i = 0; i < n; i++){
        cout<<al[i]<<" ";
    }
}