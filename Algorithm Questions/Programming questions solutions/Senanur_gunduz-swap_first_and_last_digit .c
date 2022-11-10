#include <stdio.h>
#include <math.h>

int main()
{
    int a, degisken;
    int son, ilk,basamak;
    
    printf("Lutfen sayiyi giriniz: ");
    scanf("%d",&a);
    
    son= a%10;
    basamak= log10(a);
    ilk= (a/ pow(10,basamak));
    
    degisken= (son*pow(10,basamak));
    degisken+= (a % (int)pow(10,basamak) );
    degisken+=  (ilk-son);
    
    printf("%d",degisken);
    
    return 0;
}
