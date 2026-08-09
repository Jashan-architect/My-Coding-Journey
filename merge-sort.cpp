#include <iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr , int low , int high , int mid){

    int len1 = mid - low + 1 , len2 = high - mid;
    vector<int> first(len1);
    vector<int> second(len2);
    
    int k = low;
    for(int i = 0; i < len1; i++){
        first[i] = arr[k++];
    }

    k = mid + 1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[k++];
    }

    k = low;
    int index1 = 0 , index2 = 0;

    while(index1 < len1 && index2 < len2){
        
        if(first[index1] < second[index2]){
            arr[k++] = first[index1++];
        }else{
            arr[k++] = second[index2++];
        }
    }

    while(index1 < len1){
        arr[k++] = first[index1++];
    }

    while(index2 < len2){
        arr[k++] = second[index2++];
    }
}

void divide(vector<int>& arr , int low , int high){

    if(low >= high){
        return;
    }

    int mid = low + (high - low)/2;
  
    divide(arr , low , mid);

    divide(arr , mid + 1 , high);

    merge(arr , low , high , mid);
}

int main(){
    
    vector<int> arr = {38,27,43,3,9,82,27};
    divide(arr , 0 , arr.size() - 1);

    for(auto x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}