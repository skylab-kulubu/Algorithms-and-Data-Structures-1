#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        map<int,int> *memo = new map<int,int>;
        if(n<2)
            return 1;

        (*memo)[n] = climbStairs_rec(n-2,memo) + climbStairs_rec(n-1,memo);
        return (*memo)[n];
    }
    
    int climbStairs_rec(int n, map<int,int> *memo) {
        if(!(memo->find(n)==memo->end()))
            return  (*memo)[n];

      //  if(n==2) return 2;
        if(n<2)
            return 1;

        (*memo)[n] = climbStairs_rec(n-2,memo) + climbStairs_rec(n-1,memo);
        return (*memo)[n];
    }
};

int main(int argc, char const *argv[])
{
    Solution sol;
    cout << sol.climbStairs(5);
    return 0;
}
