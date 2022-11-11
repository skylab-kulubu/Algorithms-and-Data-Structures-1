//Problem
//https://leetcode.com/problems/candy/

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> lmax(n, 1), rmax(n, 1);
        for(int i = 1; i < n; i++){
            if (ratings[i] > ratings[i - 1])
                lmax[i] = lmax[i - 1] + 1;
        }
        for(int i = n - 2; i >= 0; i--){
            if (ratings[i] > ratings[i + 1])
                rmax[i] = rmax[i + 1] + 1;
        }
        int s = 0;
        for(int i = 0; i < n; i++){
            s += max(lmax[i], rmax[i]);
        }
        return s;
    }
};