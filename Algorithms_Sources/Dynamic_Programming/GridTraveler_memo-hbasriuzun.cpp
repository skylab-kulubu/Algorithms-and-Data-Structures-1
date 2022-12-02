#include <iostream>
#include <vector>
#include <map>

using namespace std;

int traveler_rec(int height, int width, map<pair<int,int>,int> *traveler_map);
int traveler(int height, int width);

int main(int argc, char const *argv[])
{
    cout << traveler(3,7);
    return 0;
}

int traveler_rec(int height, int width, map<pair<int,int>,int> *traveler_map){
    pair<int,int> map_pair;
    map_pair.first=height;
    map_pair.second=width;

    if(height == 1 && width == 1) return 1;
    if(height == 0 || width == 0) return 0;
        if(!((*traveler_map).find(map_pair) == (*traveler_map).end()))
        return (*traveler_map)[map_pair];
    (*traveler_map)[map_pair] = traveler_rec(height-1,width, traveler_map) + traveler_rec(height, width-1, traveler_map);

    return (*traveler_map)[map_pair];
}
int traveler(int height, int width){
    pair<int,int> map_pair;
    map_pair.first=height;
    map_pair.second=width;

    map<pair<int,int>,int> *traveler_map = new map<pair<int,int>,int>;
    if(height == 1 && width == 1) return 1;
    if(height == 0 || width == 0) return 0;
    if(!((*traveler_map).find(map_pair) == (*traveler_map).end()))
        return (*traveler_map)[map_pair];

    (*traveler_map)[map_pair] = traveler_rec(height-1, width, traveler_map) + traveler_rec(height, width-1, traveler_map);
    return (*traveler_map)[map_pair] ;
}