#include <iostream>
using namespace std;

template <class T>
class myClass{
   public:
        T data;
        myClass(T data) : data(data){}
};

int main(int argc, char const *argv[])
{
    myClass<int> a(2.5);
    myClass<char> b('A');

    cout << a.data << endl;
    cout << b.data << endl;

    return 0;
}
