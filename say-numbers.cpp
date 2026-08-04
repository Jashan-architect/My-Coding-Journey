#include <iostream>
#include<string>
#include<vector>
using namespace std;

void numberToString(int n , vector<string>& arr){

    // base case
    if(n == 0){
        return;
    }

    //processing
    int i = n % 10;
    n = n/10;

    //recursive call
    numberToString(n , arr);
    cout<<arr[i]<<" ";
}

int main(){
    
    vector<string> arr = {"zero" , "one" , "two" , "three" , "four" ,
                         "five" , "six" , "seven" , "eight" , "nine"};
    int n;
    cin>>n;

    if(n == 0) {
        cout << arr[0] << endl;
        return 0;
    }

    numberToString(n , arr);
    return 0;
}