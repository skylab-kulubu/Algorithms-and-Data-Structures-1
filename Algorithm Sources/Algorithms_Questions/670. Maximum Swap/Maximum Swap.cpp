
//Problem
//https://leetcode.com/problems/maximum-swap/

class Solution {
public:
    int maximumSwap(int num) {
        vector<int> digits;
        while(num > 0){
            digits.push_back(num % 10);
            num /= 10;
        }
        int n = digits.size();
        reverse(digits.begin(), digits.end());
        vector<int> rmax(n);
        rmax[n - 1] = n - 1;
        for(int i = n - 2; i >= 0; i--){
            rmax[i] = digits[i] > digits[rmax[i + 1]] ? i: rmax[i + 1];
        }
        /*
        for(int i = 0; i < n; i++){
            cout << rmax[i];
        }
        */
        int res = 0;
        bool f = false;
        for(int i = 0; i < digits.size(); i++){
            res *= 10;
            if(!f && digits[i] < digits[rmax[i]]){
                swap(digits[i] , digits[rmax[i]]);
                f = true;
            }
            res += digits[i];
        }
        return res;
    }
};