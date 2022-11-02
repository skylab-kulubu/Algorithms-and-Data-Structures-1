#include <iostream>
#include <vector>
#include <deque>
using namespace std;


int main(int argc, char const *argv[])
{
    deque<char> animal = {'d','o','m','u','z'};
    vector<char> animal2;
    
    for(auto x : animal){
        cout << x ;
    }
    cout << "\n";

    animal.pop_front();

    for(auto x : animal){
            cout << x;
    }

    cout << "\n";
    animal.pop_front();

    for(auto x : animal){
        printf("%c",x);
    }

    cout << "\n";

    animal.push_front('o');
    animal.push_front('d');
    animal.push_back('l');
    animal.push_back('u');  
    animal.push_back('k');

    for(auto x : animal){
        printf("%c",x);
    }

    cout << "\n";

    animal.push_back('c');
    animal.push_back('u');

    for(auto x : animal){
        printf("%c",x);
    }

    return 0;
}
