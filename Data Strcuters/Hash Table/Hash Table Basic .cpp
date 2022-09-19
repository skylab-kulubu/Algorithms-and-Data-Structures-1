#include <iostream>
#include <map>
#include <string>

using namespace std;


int main(int argc, char const *argv[])
{
    map<int,string> mp = {
        {1,"Pilav"},
        {2,"Tavuk"},
        {3,"Baklava"},
        {4,"Dolma"},
        {5,"Sarma"},
        {6,"Mercimek"},
    };

    cout << mp[1] << endl;

    //Add maps

    mp[7]="Balık";
    mp.insert(pair<int,string>(8,"Ezogelin"));
    pair<int,string> p1(9,"Kavurma");       mp.insert(p1);

    //Erase

    mp.erase(p1.first);
    cout << mp[9] << endl;
    return 0;
}
