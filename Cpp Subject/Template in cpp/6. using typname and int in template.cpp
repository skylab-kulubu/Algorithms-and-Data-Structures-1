#include <iostream>
using namespace std;

template <typename T, int N>
class Array{
    private:
        T m_array[N];
    public:
        int Get_size() const {return N;}
};

int main(int argc, char const *argv[])
{
    Array<int,5> arr;

    cout << arr.Get_size() << endl;  
    return 0;
}
