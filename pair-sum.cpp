#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    
    vector <int> testcase =  {1 , -2 , -1 , 0 , 2}; 
    int n = testcase.size();
    int target = 0;

    sort(testcase.begin() , testcase.end());
    int s = 0 , e = n - 1; 

    cout<<"pair found"<<" ";

    while(s < e){

        int sum = testcase[s] + testcase[e];
        if( sum == target){

          cout<<"("<< testcase[s] <<","<<testcase[e] <<")"<<" ";
          s++;
          e--;

        }else if(sum < target){

            s++;

        }else{

            e--;
        }

    }

}