#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int size,count=0;
    bool b=0;
    printf("Enter the size: ");
    scanf("%d",&size);

    vector <int> arr;
    arr.resize(size);
    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    

    for (size_t i = 0; i < size; i++){
        if(count%2 == 0)
            b=arr[i];
        else
            b=!arr[i];

        if(b==0)
            count++;
    }
    printf("%d",count);


    return 0;
}
