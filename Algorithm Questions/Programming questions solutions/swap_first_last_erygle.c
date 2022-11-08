#include<stdio.h>
#include<math.h>

int main(void){//12345
    int i,number,fDigit,lDigit,digits,newNumber;
    
    printf("Enter your number : ");
    scanf("%d",&number);

    lDigit = number % 10;
    
    digits = (int)log10(number);
    
    fDigit = number / pow(10,digits);
    
    newNumber = lDigit*pow(10,digits);
    newNumber += number%(int)pow(10,digits);
    newNumber -= lDigit;
    newNumber += fDigit;
    
    printf("%d\n",newNumber);
return 0;
}
