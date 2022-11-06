#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int nums[100000];
	int k, i, j, x;
	int sayac=0;
	
	printf("Dizi kac elemanli: ");
	scanf("%d",&x);
	
	for(i=0;i<x;i++){
	    printf("nums[%d]: ",i+1);
	    scanf("%d",&nums[i]);
	}
	
	printf("hangi sayi: ");
	scanf("%d",&k);
	
	for(i=0; i<x; i++){
		for(j=0;j<x;j++){
			if (nums[i] == nums[j] ){
				if(abs(i - j) <= k){
					sayac++;
				}}}}
	
	if (sayac> x+1 ){
		printf("true");
	}
	
	else{
		printf("false");
	}
	return 0;
}
