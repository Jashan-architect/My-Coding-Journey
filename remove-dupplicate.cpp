#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> testcase = {1 , 2 , 2 ,3};

    if(testcase.empty()){

        cout<<0<<endl;
        return 0;

    } 

    int i = 0;

    for(int j = 1; j < testcase.size(); j++){

        if(testcase[j] != testcase[i]){
            
            i++;
            testcase[i] = testcase[j];
        }

    }
    cout<<"Unique element count "<< i + 1 <<endl;
}