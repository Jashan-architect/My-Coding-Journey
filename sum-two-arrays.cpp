#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){

	int s = 0 , e = v.size() - 1;

	while(s < e){

		swap(v[s++] , v[e--]);
	}

	return v;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	
	int i = n - 1 , j = m - 1 , carry = 0;
	vector<int> ans;

	while(i >= 0 && j >= 0){

		int val1 = a[i] , val2 = b[j];
		int sum = val1 + val2 + carry;

		carry = sum/10;
		sum = sum % 10;
		ans.push_back(sum);
		i--;
		j--;
	}

	while(i >= 0){

		int sum = a[i] + carry;
		carry = sum/10;
		sum = sum % 10;
		ans.push_back(sum);
		i--;
	}

	while(j >= 0){

		int sum = b[j] + carry;
		carry = sum/10;
		sum = sum % 10;
		ans.push_back(sum);
		j--;
	}

	while(carry != 0){

		int sum = carry;
		carry = sum/10;
		sum = sum % 10;
		ans.push_back(sum);
	}

   return reverse(ans);
}

int main(){

    vector<int> a = {9 , 9 , 9};
    vector<int> b = {1 , 2 , 4};

    vector<int> result = findArraySum(a , 3 , b , 3);

    for(int x : result){

        cout<<x;
    }
}