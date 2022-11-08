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








































/*int main(void)
{
    int num, swappedNum;
    int firstDigit, lastDigit, digits;

    //Input number from user
    printf("Enter any number: ");
    scanf("%d", &num);

    // Find last digit 
    lastDigit  = num % 10;

    // Find total number of digit - 1 
    digits     = (int)log10(num); 

    // Find first digit 
    firstDigit = (int)(num / pow(10, digits)); 

    swappedNum  = lastDigit;
    swappedNum *= (int) pow(10, digits);
    swappedNum += num % ((int) pow(10, digits));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;

    printf("Original number = %d", num);
    printf("Number after swapping first and last digit: %d", swappedNum);

    return 0;
}*/