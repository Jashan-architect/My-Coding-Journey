#include<iostream>
using namespace std;

bool isPalindrome(int x){

    if(x < 0 || (x != 0 && x % 10 == 0)){
        return false;
    }

    int reverseHalf = 0;

    while(x > reverseHalf){

        reverseHalf = 10*reverseHalf + (x % 10);
        x /= 10;
    }
    return x == reverseHalf || x == reverseHalf/10;
}

int main(){

    int x;
    cout<<"enter the number you want to check"<<endl;
    cin>>x;

    if(isPalindrome(x))
    {
        cout<<x<<" is palindrome"<<endl;
    }
    else
    {
        cout<<x<<" isn't a palindrome"<<endl;
    }
}