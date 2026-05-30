#include<iostream>
#include<climits>
using namespace std;

void find_max_and_min(int num[] , int size , int & great , int & lowest){

    great = INT_MIN;
    lowest = INT_MAX;

    for(int i = 0; i < size ; i++){

        great = max(great , num[i]);
        lowest = min(lowest , num[i]);

    }
}

int main(){

    int size;
    cout<<"enter the number of numbers you want to commpare \n**don't exceude 100**"<<endl;
    cin>>size;

    if(size > 100 || size <= 0){

        cout<<"invalid input"<<endl;
        return 0;

    }else{
        int num[100];
        cout<<"enter the numbers  you want to compare"<<endl;

        for(int i = 0; i < size ; i++){

            cin>>num[i];

        }

        int greatest_value , least_value;

        find_max_and_min(num , size , greatest_value , least_value);

        cout<<"greatest number is"<<" "<<greatest_value<<endl;
        cout<<"least number is"<<" "<<least_value<<endl;
    }
}