#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target){

    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0 , end = row*col;

    while(start <= end){

        int mid = start + (end - start)/2;
        int element = matrix[mid/col][mid%col];

        if(element == target)
        {
            return 1;
        }
        else if(target > element)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return 0;
}

int main(){

    vector<vector<int>> matrix = {{1 , 2 , 3} , {4 , 5 , 6} , {7 , 8 , 9} , {10 , 11 , 12}};
    if(searchMatrix(matrix , 6))
    {
        cout<<"Element is present in matrix"<<endl;
    }
    else
    {
        cout<<"Element isn't present in matrix"<<endl;
    }
}