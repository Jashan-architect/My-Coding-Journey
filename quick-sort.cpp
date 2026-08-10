#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int partition(vector<int>& arr , int s , int e){

    int pivot = arr[s] , count = 0;

    for(int i = s + 1; i <= e; i++){

        if(arr[i] < pivot){
            count++;
        }
    }

    int pivotIndex = s + count;
    swap(arr[s] , arr[pivotIndex]);

    int i = s , j = e;
    while(i < pivotIndex && j > pivotIndex){

        if(arr[i] < pivot){
            i++;
        } else if(arr[j] > pivot){
            j--;
        }else{
            swap(arr[i] , arr[j]);
            i++;
            j--;
        }
    }

    return pivotIndex;
}

void quickSort(vector<int>& arr , int s , int e){

    if(s >= e) return;

    int pivotIndex = partition(arr , s , e);

    //recursion call for left side
    quickSort(arr , s , pivotIndex - 1);

    //recursion call for right side
    quickSort(arr , pivotIndex + 1 , e);
}

int main() {

    vector<int> arr = {2,1,9,0,8,5,7,6};

    quickSort(arr , 0 , arr.size() - 1);
    for(int x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}