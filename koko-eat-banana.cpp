#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int minEatingSpeed(vector<int>& piles, int h){

    int s = 1 , e = *max_element(piles.begin() , piles.end());
    int ans = e;
    
    while(s <= e){
        
        int speed = s + (e - s)/2;
        long long time = 0;
        
        for(int pile : piles){

            time += (1LL*pile + speed - 1)/speed; 
        }

        if(time <= h){

            ans = speed;
            e = speed - 1;

        }else{

            s = speed + 1;

        }
    }
    return ans;
}

int main(){

    vector<int> p = {3 , 6 , 7 , 11};
    cout<<minEatingSpeed(p , 8)<<endl;
}