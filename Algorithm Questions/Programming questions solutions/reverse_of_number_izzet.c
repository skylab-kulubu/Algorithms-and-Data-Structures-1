#include <stdio.h>


int main (int argc, char **argv){
	

	int sayi, geciciSayi=0, tersi=0, kalan;
	
  printf("sayi giriniz");
	scanf("%d",&sayi);
	geciciSayi=sayi;
  
	while(geciciSayi>0){
    
		kalan=geciciSayi%10;
		tersi=10*tersi+kalan;
		geciciSayi/=10;
		
	}
	printf("sayinin tersi: %d",tersi);
