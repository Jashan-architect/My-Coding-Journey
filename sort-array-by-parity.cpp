#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sortArrayByParity(vector<int>& nums){

    int i = 0 , j = nums.size() - 1;

    while(i < j){

        if(nums[i] % 2 == 0){

            i++;
        }
        else if(nums[j] % 2 != 0){

            j--;
        }
        else{
            swap(nums[i] , nums[j]);
        }
    }
    return nums;
}

int main(){

    vector<int> nums = {3 , 1 , 2 , 4};
    
    for(auto x : sortArrayByParity(nums)){

        cout<<x<<" ";
    }

    cout<<endl;
    return 0;

}