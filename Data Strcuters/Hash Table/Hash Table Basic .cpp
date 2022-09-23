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

   // mp.erase(p1.first);
   // cout << mp[9] << endl;
  //  mp.clear(); // remove everthing from the map

    cout << mp[9] << endl;
    cout << mp.empty() << endl; // check the map empty. If the map empty return 1
    cout << mp.size() << endl;  // Give a number of pairs that are in the map

    // ITERATE

    for(map<int,string>::iterator itr = mp.begin(); itr != mp.end(); ++itr){
        cout << (*itr).second << endl;
    }

    






    return 0;
}
