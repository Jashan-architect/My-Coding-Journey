#include<iostream>
using namespace std;

int searchpivot(int arr [] , int n){

    int s = 0 , e = n - 1;
     int mid = s + (e-s)/2;

    while(s < e){

        if(arr[mid] >= arr[0]){

            s = mid +1;
        }else{

            e = mid;
        }

         mid = s + (e-s)/2;
    }
      return s;
}

int findelement(int arr[] , int start , int end , int key){

    int mid = start + (end - start)/2;

    while(start <= end){

        if(arr[mid] == key){

            return mid;

        }else if(arr[mid] > key){

            end = mid - 1;

        }else{

            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){

    int al[5] = {7 , 8 , 0 , 1 , 3};

    cout<<"enter the number u want to find \n choose from following"<<endl;
    cout<<"{7 , 8 , 0 , 1 , 3}"<<endl;

    int k;
    cin>>k;
    int pivot = searchpivot(al , 5);
    int ans = -1;
   
    if(k >= al[pivot] && k <= al[4]){
        
         ans = findelement( al , pivot , 4 , k);
       
    }else{

         ans = findelement(al , 0 , pivot-1 ,k);
        

    }

    if( ans != -1){
         cout<<"Element found at index: "<< ans <<endl;
    }else{
        cout<<"element not found"<<endl;
    }

}
