#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> nums = {1 , 2 , 3 , 4 , 5 , 6 , 7};

    int n = nums.size();
    int s = 0 , e = nums.size() - 1 ,  k = 5;
    k = k % n;
    
    while(s < e){

        swap(nums[s] , nums[e]);
        s++;
        e--;
    }

    s = 0;
    e = k- 1;

    while(s < e){

        swap(nums[s] , nums[e]);
        s++;
        e--;

    }

    s = k;
    e = n - 1;

    while(s < e){

        swap(nums[s] , nums[e]);
        s++;
        e--;

    }

    for(int x : nums){

        cout<< x <<" ";
    }

}
