#include<stdio.h>
#include<math.h>
int main(void){//12345
    int number,digits,dirNumber,temp;
    printf("Enter number : ");
    scanf("%d",&number);
    digits = (int)log10(number);
    dirNumber = 0;
    while(number > 0){
        temp = number % 10;
        dirNumber += temp*pow(10,digits);
        digits--;
        number = number / 10;
    }printf("\n%d\n",dirNumber);
return 0;
}
