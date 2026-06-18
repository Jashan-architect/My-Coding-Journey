#include<iostream>
using namespace std;

int main(){

    int arr[5] = {4 , 1 , 3 , 9 , 7} , n = 5;

    for(int i = 1; i < n; i++){

        int temp = arr[i] , j = i - 1;
        
        for(; j >= 0; j--){

            if(arr[j] > temp){
                arr[j + 1] = arr[j];
            }else{
                break;
            }
        }
        arr[j + 1] = temp; 
    }

    for(int i = 0; i < n; i++){
        cout<< arr[i] <<" ";
    }
}
    