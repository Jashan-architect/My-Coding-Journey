#include<iostream>
using namespace std;

bool ispossible(int arr[] , int m , int n , int mid){
    int sc = 1 , ps = 0;

    for(int i = 0 ; i < n ; i++){

        if(arr[i] > mid){

            return false ; 
        }

        if(ps + arr[i] <= mid){

            ps += arr[i];

        }else{

            sc ++;
            ps = arr[i];

            if(sc > m){

                 return false ; 
            }
        }
    }
    return true ;
}

int bookallocation(int arr[] , int m , int n){
    int s = 0;
    int sum = 0;
    int ans = -1 ;

    for(int i = 0; i < n; i++){
       
        sum += arr[i];

        int  e = sum;
        int mid = s + (e - s)/2;

        if(ispossible(arr , m , n , mid)){

            ans = mid;
            e = mid - 1;

        }else{
            s = mid + 1;
        }
        mid = s + (e - s)/2;

    }
    return ans;
}

int main(){

    int al[5] = {20 , 30 , 40 , 50};
    cout<< bookallocation(al , 2 , 4) <<endl;
}