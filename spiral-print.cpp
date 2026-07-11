#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix){
    vector<int> ans;

    int row = matrix.size();
    int col = matrix[0].size();
    
    int count = 0;
    int total = row * col; 
    int startingRow = 0, endingRow = row - 1, endingCol = col - 1, startingCol = 0;
    
    while(count < total) {

        // 1. Print starting row (Left to Right)
        for(int index = startingCol; count < total && index <= endingCol; index++){

            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;
        
        // 2. Print ending column (Top to Bottom)
        for(int index = startingRow; count < total && index <= endingRow; index++){

            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;
        
        // 3. Print ending row (Right to Left)
        for(int index = endingCol; count < total && index >= startingCol; index--){

            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;
        
        // 4. Print starting column (Bottom to Top)
        for(int index = endingRow; count < total && index >= startingRow; index--){

            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}

int main(){

    vector<vector<int>> matrix = {
       {1,2,3} 
      ,{4,5,6},
       {7,8,9}};

    vector<int> result = spiralOrder(matrix);

    for(int x : result){
        cout<<x<<" ";
    }
}