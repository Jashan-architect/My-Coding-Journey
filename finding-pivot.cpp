#include<iostream>
using namespace std;

int findapivot(int arr[], int n){

    int s = 0 , e = n - 1;
    int mid = s + (e - s)/2;

    while(s < e){

        if(arr[mid] >= arr[0]){

            s = mid + 1;

        }else{

            e = mid;

        }

        mid = s + (e - s)/2;
    }
    return s;
}

int main(){

    int al[5] = {7 , 8 , 0 ,1 , 2};
    cout<< findapivot(al , 5)<<endl;
}