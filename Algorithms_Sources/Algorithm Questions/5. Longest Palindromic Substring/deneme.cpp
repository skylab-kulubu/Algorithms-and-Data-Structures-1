#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>




using namespace std;

int main(int argc, char const *argv[])
{
    map<int,int> memo;

    memo[1] = 1;
    memo[2] = 2;
    memo[1] = 3;
    memo.insert(pair<int,int>(1,4));

    cout << memo[1] << endl;
    unordered_map<int,int> memo2;
    memo2[1] = 1;
    memo2[2] = 2;
    memo2[1] = 3;


    
    
    return 0;
}
