#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int trap(vector<int>& height){

    int start = 0 , end = height.size() - 1;
    int leftMax = 0 , rightMax = 0 , waterCount = 0;

    while(start < end){

        leftMax = max(leftMax , height[start]);
        rightMax = max(rightMax , height[end]);

        if(leftMax < rightMax){
            waterCount += leftMax - height[start];
            start++;
        }
        else{
            waterCount += rightMax - height[end];
            end--;
        }
    }
    return waterCount;
}

int main(){

    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

    cout<<trap(height)<<endl;
    return 0;
}