#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {

    int n = nums.size();

    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    
    for(int i = 0; i < n - 2; i++){

        if(i > 0 && nums[i] == nums[i-1]){
            
            continue;
        }
        
        int j = i + 1, k = n - 1;

        while(j < k){

            int current_sum = nums[i] + nums[j] + nums[k];
            
            if(current_sum == 0){

                ans.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;
                
                while(j < k && nums[j] == nums[j-1]) j++;
                while(j < k && nums[k] == nums[k+1]) k--;
            }
            else if(current_sum < 0){

                j++;
            }
            else{

                k--;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    
    vector<vector<int>> result = threeSum(nums);

    for (int i = 0; i < result.size(); i++) {

        cout << "  [" << result[i][0] << ", " << result[i][1] << ", " << result[i][2] << "]" << endl;
    }
 
}