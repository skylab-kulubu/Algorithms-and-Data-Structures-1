#include <iostream>
#include <vector>
#include <map>
using namespace std;

int fib_me(int num, map<int,int> *memo);
int fib_memo(int num);
int fib(int num);

int main(int argc, char const *argv[])
{

    cout << fib_memo(45) << endl;
    cout << fib(45);
    return 0;
}


int fib_me(int num, map<int,int> *memo){
    if (!((*memo).find(num) == (*memo).end()))
        return (*memo)[num];
    
    if (num <= 2) return 1;
    (*memo)[num] = fib_me(num-1,memo) + fib_me(num-2,memo); 
    return (*memo)[num];
}
int fib(int num){
    if (num <= 2) return 1;
    return fib(num-1) + fib(num-2); 
}
int fib_memo(int num){
    map<int,int> *memo = new map<int,int>;
    int num2;
    if (!((*memo).find(num) == (*memo).end()))
        return (*memo)[num];
    
    if (num <= 2) return 1;
    (*memo)[num] = fib_me(num-1,memo) + fib_me(num-2,memo); 
    return (*memo)[num];
}