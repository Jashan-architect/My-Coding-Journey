#include<iostream>
#include<climits>
using namespace std;

int reverseInteger(int x){

    int ans = 0;

    while(x != 0){
    
        int digit = x%10;
        
        if(ans > INT_MAX/10 || ans < INT_MIN/10){
            return 0;
        }

        ans = ans*10 + digit;
        x /= 10;
    }
    return ans;
}

int main() {

    cout<<"enter the number you want to reverse"<<endl;

    int x;
    cin>>x;

    cout<<"answer is "<<reverseInteger(x)<<endl;
}