#include<iostream>
#include<algorithm>
using namespace std;

bool ispresent(int arr[][4] , int target , int n , int m){

    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){
           
            if(arr[i][j] == target){
                
                cout<<"at "<<"("<<i<<","<<j<<")";
                return 1;
            } 
        }
    }
    return 0;
}

int main(){

    int arr[3][4] = {{0 , 1 , 2 , 3} , {4 , 5 , 6 , 7} , {8 , 9 , 10 , 11}};

    if(ispresent(arr , 0 , 3 , 4))
    {
        cout<<" element is present in array"<<endl;
    }else
    {
        cout<<"element isn't present in array"<<endl;
    }
}