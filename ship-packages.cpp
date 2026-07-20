#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool ispossible(vector<int>& weights, int days, int mid){

    int numberOfPackages = 0 , day = 1, currentSum = 0;

    for(int i = 0; i < weights.size(); i++){

        if(weights[i] > mid){
            return false;
        }

        if(currentSum + weights[i] <= mid){
            currentSum += weights[i];

        }else{
            day ++;
            currentSum = weights[i];

            if(day > days){
                return false;
            }
        }
    }
    return true;
}

int shipWithinDays(vector<int>& weights, int days){
   
    int s = *max_element(weights.begin() , weights.end());
    int e = 0;

    for(int i = 0; i < weights.size(); i++){
        e += weights[i];
    }
    int ans = e;

    while(s <= e){

        int mid = s + (e - s)/2;
        if(ispossible(weights , days , mid)){
            ans = mid;
            e = mid - 1;

        }else{
            s = mid + 1;
        }
    }
    return ans;
}

int main(){

    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;

    cout<<shipWithinDays(weights , 5)<<endl;
    return 0;
}