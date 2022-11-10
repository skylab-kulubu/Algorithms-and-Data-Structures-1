#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int A[4],i,j;
	int sayac=0;
	
	printf("Ampul duzenini 1 ve 0 kullanarak giriniz.\n ");
	
	for(i=0;i<4;i++){
		printf("%d. ampul durumu :",i+1);
		scanf("%d",&A[i]);
	}
	
	for(i=0;i<4;i++){
		if(A[i]==0){
			for(j=i;j<4;j++){
				switch (A[j])			
				{
				            case 0:
				            	A[j]=1;
				            	break;
				            case 1:
				            	A[j]=0;
				            	break;
				
				}
			}
			sayac++;
		}
  }
	
	printf("%d",sayac);
	
	return 0;
}
