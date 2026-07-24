#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int removeDuplicates(vector<int>& nums){

    if(nums.size() <= 2){
        return nums.size();
    }

    int k = 2;

    for(int i = 2; i < nums.size(); i++){

        if(nums[i] != nums[k - 2]){
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int main(){

    vector <int> nums = {1 , 1 , 1 , 2 , 2 , 3};
    cout<<"Number of valid elements are "<<removeDuplicates(nums)<<endl;

    return 0;
}