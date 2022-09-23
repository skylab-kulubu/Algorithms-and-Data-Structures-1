#include <iostream>
using namespace std;

template <typename T>
T arttir(T x){
   return x + 1;
}

template <typename T>
void yerdegis(T &x, T &y){
   T temp=x;
   x=y;
   y=temp;
}


int main(int argc, char const *argv[])
{

    cout << arttir(3) << endl;
    cout << arttir(3.5) << endl;
    cout << endl;

//  *************************************  
    int a=5, b=10;

    cout << a << "\t" << b << endl;
    yerdegis(a,b);
    cout << a << "\t" << b << endl;
    cout << endl;

//  *************************************  
    char c1='A', c2='B';

    cout << c1 << "\t" << c2 << endl;
    yerdegis(c1,c2);
    cout << c1 << "\t" << c2 << endl;
    cout << endl;

    return 0;
}
