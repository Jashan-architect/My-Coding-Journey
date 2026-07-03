#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

    if (nums1.size() > nums2.size()) {

        return findMedianSortedArrays(nums2, nums1);
    }
    
    int m = nums1.size();
    int n = nums2.size();

    int low = 0, high = m;
    
    while (low <= high) {

        int partitionX = low + (high - low) / 2;
        int partitionY = (m + n + 1) / 2 - partitionX;
        
        int maxleftX, minrightX, maxleftY, minrightY;
        
        if (partitionX == 0) {

            maxleftX = INT_MIN;

        } else {

            maxleftX = nums1[partitionX - 1];
        }
        
        if (partitionX == m) {

            minrightX = INT_MAX;

        } else{

            minrightX = nums1[partitionX];
        }
        
        if (partitionY == 0){

            maxleftY = INT_MIN;

        } else{

            maxleftY = nums2[partitionY - 1];
        }
        
        if (partitionY == n){

            minrightY = INT_MAX;

        } else{

            minrightY = nums2[partitionY];
        }
        
        if (maxleftX <= minrightY && maxleftY <= minrightX){

            if ((m + n) % 2 == 0){

                int leftmax = max(maxleftX, maxleftY);
                int rightmin = min(minrightX, minrightY);
                return (leftmax + rightmin) / 2.0;

            } else{
                return max(maxleftX, maxleftY);
            }
        } 
        else if (maxleftX > minrightY){

            high = partitionX - 1;
        } 
        else {

            low = partitionX + 1;
        }
    }
    
    return 0.0;
}

int main() {

    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    
    double median = findMedianSortedArrays(nums1, nums2);
    
    cout << "Median is: " << median << endl;
   
}