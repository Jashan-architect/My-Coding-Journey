#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int canCompleteCircuit(vector<int>& gas, vector<int>& cost){
    
    int n = gas.size() , total_balance = 0 , current_balance = 0 , start_index = 0;

    for(int i = 0; i < n; i++){

        int net_gas = gas[i] - cost[i];
        total_balance += net_gas;
        current_balance += net_gas;

        if(current_balance < 0){

            start_index = i + 1;
            current_balance = 0;
        }
    }
    return (total_balance >= 0)? start_index : -1;
}

int main(){

    vector<int> gas = {1 , 2 , 3 , 4 , 5};
    vector<int> cost = {3 , 4 , 5 , 1 , 2};

    cout<<canCompleteCircuit(gas , cost)<<endl;
}