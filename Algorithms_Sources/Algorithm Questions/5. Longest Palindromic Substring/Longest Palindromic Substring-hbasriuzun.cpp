#include <iostream>
#include <map>
#include <vector>
#include <cstring>

using namespace std;

class Solution {
        
public: 
string s;
string longestPalindrome( string s){
const int n = s.size();
        if (n == 0)
            return "";
        bool dp[n][n];
        memset(dp, false, sizeof(dp)); 
        int maxlen=1;
        for(int i=0; i<n; i++)
           dp[i][i] = true;

        int start = 0;

        for(int i=0; i<n-1; i++){
            if(s[i]==s[i+1]){
                dp[i][i+1] = true;
                start=i;
                maxlen =2;
            }
        }
        for(int k=3; k<=n; k++){
            for(int i=0; i<n-k+1; i++){
                int j = i+k-1;
                if(s[i]==s[j] && dp[i+1][j-1]){
                    dp[i][j]=true;
                    if(k>maxlen){
                        start = i;
                        maxlen=k;
                    }
                }
            }
        }
        string res=s.substr(start, maxlen);
        return res;     
    }
};
int main(int argc, char const *argv[])
{
    map <int,string> *memo = new map <int,string>;

    (*memo)[1] = "hbasriuzun";
    cout << (*memo)[1].size();
    Solution s;
    s.s = "babad";
    cout << s.longestPalindrome(s.s);

/*
    Solution s;
    s.s = "babad";
    cout << s.longestPalindrome(s.s); */
    return 0;
}