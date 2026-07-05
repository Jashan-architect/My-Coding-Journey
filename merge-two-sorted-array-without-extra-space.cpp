#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr1 , int m , vector<int>& arr2 , int n){
    
    int i = m - 1 , j = n - 1 , k = m + n - 1;

    while(i >= 0 && j >= 0){

        if(arr1[i] >arr2[j]){

            arr1[k] = arr1[i];
            i--;

        }else{

            arr1[k] = arr2[j];
            j--;
        }
        k--;
    }

    while(j >= 0){

        arr1[k] = arr2[j];
        j--;
        k--;
    }

}

int main(){

    vector<int> arr1 = {1 , 2 , 3 , 0 , 0 , 0};
    vector<int> arr2 = {2 , 5 , 6};
    int m = 3 , n = 3;

    merge(arr1 , 3 , arr2 , 3);
    cout<<"Merged Vector is:"<<endl;

    for(int x : arr1){
        cout<< x <<" ";
    }

}