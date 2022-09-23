#include <iostream>
using namespace std;

int arttir(int num){
   return num += 1;
}

double arttir(double num){
    return num + 1;
}

int main(int argc, char const *argv[])
{

    cout << arttir(3) << endl;
    cout << arttir(3.5) << endl;

    return 0;
}
