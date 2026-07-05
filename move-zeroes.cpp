#include<iostream>
#include<vector>
using namespace std;

void move(vector<int>& test){
    int i = 0;

    for(int j = 0; j < test.size(); j++){

        if(test[j] != 0){

            swap(test[j] , test[i]);
            i++;
        }
    }
}

int main(){

    vector<int> test = {1 , 0 , 3 , 4 , 0 , 0 , 0};
    move(test);

    for(int x : test){
        cout<< x <<" ";
    }

}