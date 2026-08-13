#include <iostream>
#include<vector>
#include<string>
using namespace std;

void solve(int row, int col, vector<vector<int>>& maze, int n, vector<string>& ans, string currentPath, vector<vector<bool>>& visited){

    //boundary check
    if(row >= n || col >= n || row < 0 || col < 0 || maze[row][col] == 0 || visited[row][col]) return;

    // base case
    if(row == n - 1 && col == n -1){
        ans.push_back(currentPath);
        return;
    }
    
    //marking visted path
    visited[row][col] = true;

    //checking down
    solve(row + 1, col, maze, n, ans, currentPath + 'D', visited);

    //checking left
    solve(row, col - 1, maze, n, ans, currentPath + 'L', visited);

    //checking right
    solve(row , col + 1 , maze , n , ans , currentPath + 'R' , visited);

    //checking up
    solve(row - 1, col, maze, n, ans, currentPath + 'U', visited);

    //backtracking
    visited[row][col] = false;
}

vector<string> ratInMaze(vector<vector<int>>& maze){

    int n = maze.size();
    vector<string> ans;

    //entry and exit checking
    if(maze[0][0] == 0 || maze[n - 1][n - 1] == 0)
    return ans;

    vector<vector<bool>> visited(n , vector<bool>(n , false));
    solve(0 , 0 , maze , n , ans , "" , visited);

    return ans;
}

int main() {
    
    vector<vector<int>> way = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    vector<string> result = ratInMaze(way);

    for(int i = 0; i < result.size(); i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}