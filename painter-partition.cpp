#include<iostream>
using namespace std;

bool ispossible(int arr[] , int n , int k , int mid){

    int paintercount = 1;
    int boardsum = 0;

    for(int i = 0; i < n; i++){

        if(arr[i] > mid){
            return false;
        }

        if(boardsum + arr[i] <= mid){

            boardsum += arr[i];

        }else{
            paintercount++;

             if(paintercount > k){

            return false;

         }

         boardsum = arr[i];

        }
    }
    return true;
}

int main(){

    int arr[4] = {10 , 20 , 5 , 21};
    int s = 0 , n = 4 , ans = -1 , k =2 , e = 1;

    for(int i = 0; i<n; i++){

        e += arr[i];

        if(arr[i] > s){
            
            s = arr[i];
        }

    }

    while(s <= e){
        int mid = s + (e -s)/2;

        if(ispossible(arr , n , k , mid)){

            ans = mid;
            e = mid - 1;

        }else{

            s = mid + 1;

        }

    }

    cout << ans <<endl;

}