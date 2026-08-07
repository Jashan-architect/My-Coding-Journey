#include <iostream>
using namespace std;

bool isfound(int arr[] , int s , int e , int target){

    if(s > e){
        return false;
    }
    int mid = s + (e - s)/2;
    
    if(arr[mid] == target){
        return true;
    }
    else if(arr[mid] > target){
        return isfound(arr , s , mid - 1 , target);
    }
    else{
        return isfound(arr , mid + 1 , e , target);
    }
}

int main(){
    
    int arr[] = {1,2,3,4,5,6,7,8,9};

    if(isfound(arr , 0 , 8 , 9)){

        cout<<"element is present in array"<<endl;
    }else{

        cout<<"element isn't present in array"<<endl;
    }
    
    return 0;
}