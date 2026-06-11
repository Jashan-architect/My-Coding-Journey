#include<iostream> 
using namespace std;

int main(){

    int arr[5] = {1 ,2 ,6 ,3, 8};

    int intail_area = 0;
    int start = 0 , end = 4;

    while(start < end){

        int area  = (end - start)*(min(arr[start] , arr[end]));

        if(area > intail_area){

            intail_area = area;
        }

        if(arr[start] < arr[end]){

            start++;

        }else{

            end--;

        }

    }
    cout<<"maximum area is "<<intail_area<<endl;
}