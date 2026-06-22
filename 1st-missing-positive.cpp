#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector <int> testcase = {-1 , 2  , 0  , -3};
    int n = testcase.size();

    for(int i = 0; i < n; i++){

        while(testcase[i] > 0 && testcase[i] <= n && testcase[i] != testcase[testcase[i] - 1]){

            swap(testcase[i] , testcase[testcase[i] - 1]);
        }

    }

    int first_missing = n+1;

    for(int i = 0; i < n; i++){

        if(testcase[i] != i + 1){
            first_missing = i+1;
            break;
        }
    }
    cout<<"first positive missing number is "<<first_missing<<endl;
}