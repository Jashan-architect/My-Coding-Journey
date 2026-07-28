#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string addStrings(string num1, string num2){

    string ans = "";
    int i = num1.length() - 1 , j = num2.length() - 1 , carry = 0;

    while(i >= 0 || j >= 0 || carry > 0){
        int sum = carry;

        if(i >= 0){
            sum += num1[i] - '0';
            i--;
        }

        if(j >= 0){
            sum += num2[j] - '0';
            j--;
        }

        carry = sum/10;
        ans += to_string(sum % 10);

    }
    reverse(ans.begin() , ans.end());
    return ans;
}

int main(){

    string num1 = "11";
    string num2 = "123";

    cout<<addStrings(num1 , num2)<<endl;
}