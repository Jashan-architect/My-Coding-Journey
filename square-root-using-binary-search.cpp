#include<iostream>
using namespace std;

int main(){

 long long  int n;
   cout<<"enter the number"<<endl;
   cin>>n;

   if(n<0){

    cout<<"Invalid Input"<<endl;

   }else{
       long long  int start = 0, end = n , ans =-1;
       long long int mid = start + (end - start)/2;

        
        while(start <= end){

        if(mid*mid == n){
            ans = mid;
            break;

        }else if(mid*mid > n){

            end = mid - 1;

        }else{

            ans = mid;
            start = mid + 1;

        }

          mid = start + (end - start)/2;

    }
    cout<< ans <<endl;
}
}

        
   
