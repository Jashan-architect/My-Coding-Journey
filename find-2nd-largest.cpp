#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> testcase = {10 , 10 , 25 , 5};
    
    sort(testcase.begin() , testcase.end());
    int n = testcase.size() , ans = -1;
    int largest = testcase[n - 1];

    if(n < 2){
        cout<<"no 2nd largest element exist"<<endl;
        return 0;
    }
    else{

        for(int i = n - 2; i>=0; i--){
            
            if(testcase[i] < largest){
                
                ans = testcase[i];
                break;
            
            }
        }
        cout<<"2nd largest element is "<<ans<<endl;
    }
}