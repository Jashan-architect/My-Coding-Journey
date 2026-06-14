#include<iostream>
using namespace std;

int main(){

    int al[5] = {3 , 4 , 5 , 1 , 2};

    int s = 0 , e = 4;
    int ans = al[0] , ans2 = -1;
    
    while(s<e){
      int mid = s + (e -s)/2;

      if(al[mid] > al[e]){

        s = mid + 1;

      }else{

        ans = al[mid];
        ans2 = mid;
        e = mid; 

      }

    }
    cout<<"minimum element is "<< ans <<" located at "<< ans2 <<" index "<<endl;
}