#include<iostream> 
using namespace std;

int dig(int n){

int sum = 0;
n = abs(n);

    while(n != 0){

        int digit = n%10;
        sum = sum + digit;
        n = n/10;

    }

return sum;

}

int main (){

    cout<<"enter the value of number"<<endl;
    int n; 
    cin>>n;
    
    cout<<dig(n)<<endl;
    }