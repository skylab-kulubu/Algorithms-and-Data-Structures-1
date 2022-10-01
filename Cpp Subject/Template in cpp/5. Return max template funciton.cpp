#include <iostream>
using namespace std;

template <typename T>
T maximum_num(T value1, T value2){
    if (value1 < value2)
        return value2;
    else if(value2 <= value1)
        return value1;
}

int main(int argc, char const *argv[])
{
    int value1 = 23;
    int value2 = 23.6;
    cout << maximum_num(value1,value2) << endl; 

    return 0;
}
