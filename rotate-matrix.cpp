#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotate(vector<vector<int>>& matrix){

    int n = matrix.size();

    for(int i = 0; i < n; i++){

        for(int j = i + 1; j < n; j++){

            swap(matrix[i][j] , matrix[j][i]);

        }
    }

    for(int i = 0; i < n; i++){

        int s = 0 , e = n - 1;
        while(s < e){

            swap(matrix[i][s] , matrix[i][e]);
            s++;
            e--;
        }
    }
}

int main(){

    vector<vector<int>> matrix = {{1,2,3} , {4,5,6} , {7,8,9}};
    rotate(matrix);

    for(const auto& x : matrix){
       for(int val : x){
         cout<<val<<" ";
        }
        
        cout<<"\n";
    }

}