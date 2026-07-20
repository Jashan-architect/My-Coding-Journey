#include<iostream>
#include<vector>
using namespace std;

int FirstPosition(vector<int>& nums, int target){

    int s = 0 , e = nums.size() - 1 , ans = -1;

    while(s <= e){
        int mid = s +(e - s)/2;
        
        if(nums[mid] == target)
        {
            ans = mid;
            e = mid - 1;
        }
        else if(nums[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int LastPosition(vector<int>& nums, int target){

    int s = 0 , e = nums.size() - 1 , ans2 = -1;

    while(s <= e){
        int mid = s + (e - s)/2;
        
        if(nums[mid] == target)
        {
            ans2 = mid;
            s = mid + 1;
        }
        else if(nums[mid] < target)
        {
           s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    } 
    return ans2;
}

int main(){

    vector<int> nums = {5 , 7 , 7 , 8 , 8 , 8 , 10};
    int target = 8;

    pair<int , int> answer = {FirstPosition(nums , target) , LastPosition(nums , target)};
    cout<<"["<<answer.first<<" , "<<answer.second<<"]"<<endl;

}