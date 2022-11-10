#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void f(int a){
	int t=0;
	while(a != 0)
    { 
        t = (t * 10) + (a % 10);
        a /= 10;
    }

    printf("%d \n", t);
	 
    	
}

int main(int argc, char *argv[]) {
    //bu kısım sonuca bakmadan bir şey üretmeye çalıştığım kısım, fonkiyon ise sonuca baktıktan sonra çözümü anlayıp yazdığım kısım.
	int i,t;
	int a,basamak;
	int sayac=0;
	
	printf("Lutfen sayiyi giriniz: ");
	scanf("%d",&a);
	
	f(a);
	
	basamak= log10(a);
	
	for(i=0;i<=basamak;i++){
		t=a/pow(10,(basamak-i));
		a-= (t*pow(10,(basamak-i)));
		t*=pow(10,i);
		sayac+= t;
		
		}
	
	printf("%d",sayac);
	
	return 0;
}
