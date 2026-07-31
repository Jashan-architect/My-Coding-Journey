#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <unordered_set>

using namespace std;

int lengthOfLongestSubstring(string s){
    queue<char> q;
    unordered_set<char> inQueue;
    int maxLength = 0;

    for (char c : s) {
        
        while (!q.empty() && inQueue.count(c)){

            char frontChar = q.front();
            q.pop();
            inQueue.erase(frontChar); 
        }

        q.push(c);
        inQueue.insert(c);

        maxLength = max(maxLength, (int)q.size());
    }
    return maxLength;
}

int main(){
    string s = "abcabcbb";
    cout << "max length is " << lengthOfLongestSubstring(s) << endl;

    return 0;
}