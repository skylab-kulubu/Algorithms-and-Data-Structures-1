#include <stdio.h>

int main(int argc, char const *argv[])
{
    long long sum=0  ,n=10;
    
    for( int i=1; i<=n; i++ )
        for(int j=i; j<=n; j++ )
            for(int k = i; k<=j; k++ )
                sum += 1;
    
    printf("%d",sum);
    return 0;
}
