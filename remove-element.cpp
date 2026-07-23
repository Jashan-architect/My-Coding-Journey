#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int removeElement(vector<int>& nums, int val){

    int left = 0 , right = nums.size() - 1;

    while(left <= right){

        if(nums[left] == val){

            if(nums[right] != val){
                swap(nums[left] , nums[right]);
                left++;
                right--;

            }else{

                right--;
            }
        }else{

            left++;
        }
    }
    return left;
}

int main(){

    vector<int> nums = {3 , 2 , 2 , 3 , 3 , 4 , 6};
    cout<<removeElement(nums , 3)<<endl;
}