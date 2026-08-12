#include <iostream>
#include<vector>
using namespace std;

void solve(vector<int>& nums , vector<vector<int>>& ans , int index){

    //base case
    if(index >= nums.size()){
        ans.push_back(nums);
        return;
    }

    for(int j = index; j < nums.size(); j++){
        swap(nums[index] , nums[j]);
        solve(nums , ans , index + 1); // recursive call

        //backtracking
        swap(nums[index] , nums[j]);
    }
}

vector<vector<int>> permute(vector<int>& nums){

    vector<vector<int>> ans;
    int index = 0;
    solve(nums , ans , index); // function call

    return ans;
}

int main() {
    
    vector<int> nums = {1,2,3};
    vector<vector<int>> result = permute(nums);

    for(int i = 0; i < result.size(); i++){
        cout<<"[";
        for(int j = 0; j < result[i].size(); j++){
            cout<<result[i][j]<<" ";
        }
        cout<<"]\n";
    }
    return 0;
}