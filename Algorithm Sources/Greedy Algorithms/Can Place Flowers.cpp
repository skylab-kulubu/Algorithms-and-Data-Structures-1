#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> flowerbed = {1,0,0,0,0,0,1};

    int n=2;
    int max_flower=0;
        if(flowerbed.size()==1){
            if(flowerbed[0]==0)
                max_flower++;}
        else if(flowerbed.size()==2){
            if(flowerbed[0]==0 && flowerbed[1]==0)
                max_flower++;}
        
        int i=1;
        if(flowerbed.size()>2)
        if(flowerbed[0] == 0 && flowerbed[1] == 0){
                max_flower++;
                i++;
            }
        
        for(; i<flowerbed.size()-1; i++){
             if(flowerbed[i-1] == 0 && flowerbed[i] == 0 && flowerbed[i+1] == 0){
                max_flower++;
                flowerbed[i] = 1;
                i++;
            }
        }
        if(flowerbed.size()>2)
            if(flowerbed[flowerbed.size()-1] == 0 && flowerbed[flowerbed.size()-2] == 0){
                    max_flower++;
                }
        
        if(n<=max_flower)
            cout << true;
        else
            cout << false;
    return 0;
}
