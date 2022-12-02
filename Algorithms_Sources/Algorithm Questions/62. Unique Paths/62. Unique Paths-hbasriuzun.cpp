#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    
    
    int traveler_rec(int m, int n, map<pair<int,int>,int> *traveler_map){
    pair<int,int> map_pair;
    map_pair.first=m;
    map_pair.second=n;

    if(m == 1 && n == 1) return 1;
    if(m == 0 || n == 0) return 0;
        if(!((*traveler_map).find(map_pair) == (*traveler_map).end()))
        return (*traveler_map)[map_pair];
    (*traveler_map)[map_pair] = traveler_rec(m-1,n, traveler_map) + traveler_rec(m, n-1, traveler_map);

    return (*traveler_map)[map_pair];
}
int uniquePaths(int m, int n){
    pair<int,int> map_pair;
    map_pair.first=m;
    map_pair.second=n;

    map<pair<int,int>,int> *traveler_map = new map<pair<int,int>,int>;
    if(m == 1 && n == 1) return 1;
    if(m == 0 || n == 0) return 0;
    if(!((*traveler_map).find(map_pair) == (*traveler_map).end()))
        return (*traveler_map)[map_pair];

    (*traveler_map)[map_pair] = traveler_rec(m-1, n, traveler_map) + traveler_rec(m, n-1, traveler_map);
    return (*traveler_map)[map_pair] ;
}
};

int main(int argc, char const *argv[])
{
    Solution num;
    cout << num.uniquePaths(3,7);
    return 0;
}
