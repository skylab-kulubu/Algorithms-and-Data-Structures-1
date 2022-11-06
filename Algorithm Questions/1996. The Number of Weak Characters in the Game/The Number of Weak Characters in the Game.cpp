//Problem
//https://leetcode.com/problems/the-number-of-weak-characters-in-the-game/

class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(), properties.end(), [](vector<int> &a, vector<int> &b){
            return a[0] != b[0] ? a[0] > b[0]: a[1] < b[1]; 
        });
        int ma = INT_MIN;
        int c = 0;
        for(auto &i: properties){
            if (ma > i[1])
                c++;
            else
                ma = i[1];
        }
        return c;
    }
};