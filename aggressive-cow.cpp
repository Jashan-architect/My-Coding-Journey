#include<iostream>
#include<algorithm>
using namespace std;

bool ispossible(int arr[] , int stalls , int k , int mid){

    int cowcount = 1 , lastposition = arr[0];

    for(int i = 1; i < stalls; i++){

        if(arr[i] - lastposition >= mid){

            cowcount++;

            if(cowcount == k){
                return true;
            }
            lastposition = arr[i];

        }
    }
    return false;
}

int main(){

    int al[5] = {4 , 2 , 1 , 3 , 6};

    sort(begin(al) , end(al));
    int s = 0 , e = al[4] - al[0];

    int ans = -1;

    while(s <= e){
    
       int mid = s + (e-s)/2;

        if(ispossible(al , 5 , 2 , mid)){

          ans = mid;
          s = mid + 1;
        }
        else{

            e = mid - 1;
        }

    }
    cout<<"maximum distance at which cows can sit "<< ans <<endl;
}