#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    vector <pair<int,int>> rooms;
    vector <pair<int,int>> meeting;
    pair<int,int> room;
    int size,i,max_meeting=0;
    scanf("%d",&size);

    
    for ( i = 0; i < size; i++){
        cin >> room.first >> room.second;
        rooms.push_back(room);
        room.first = rooms[i].first;
        room.second = 1;
        meeting.push_back(room);
        room.first = rooms[i].second;
        room.second = -1;
        meeting.push_back(room);
    }
    
    sort(meeting.begin(),meeting.end());
    
    int temp=0;
    for ( i = 0; i < size*2; i++){
        temp+=meeting[i].second;
        max_meeting=max(max_meeting,temp);
    }
    
    cout << max_meeting;

    return 0;
}
