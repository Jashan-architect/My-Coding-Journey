#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(vector<int>& arr1 , int m , vector<int>& arr2 , int n , vector<int>& arr3){

    int i = 0 , j =0 , k = 0;

    while(i < m && j < n){

        if(arr1[i] <= arr2[j]){

            arr3[k] = arr1[i];
            k++;
            i++;

        }else{

         arr3[k] = arr2[j];
         k++;
         j++;
         
        }

    }
   
while (i < m){

    arr3[k] = arr1[i];
    k++;
    i++;

}
while (j < n){

    arr3[k] = arr2[j];
    k++;
    j++;
}


}

int main(){


    vector<int> arr1 = {2 , 4 , 6 , 8};
    vector<int> arr2 = {1 , 3 , 5 , 7};

    int m = arr1.size() , n = arr2.size();

    vector<int> arr3(m + n);
    
    merge(arr1 , 4 , arr2 , 4 , arr3);

    cout<<"Merged Array is:"<<endl;

    for(int x = 0; x < arr3.size(); x++){

        cout<<arr3[x]<<" ";
    }

}