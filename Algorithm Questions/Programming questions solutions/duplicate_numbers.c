#include<stdio.h>
int main(void){//1 3 2 1 4
    int temp,req,i,j;
    printf("Enter your size : ");
    scanf("%d",&req);
    int arr[req];
    for(i=0 ; i<req ; i++){
        printf("Enter your %d. number : ",i+1);
        scanf("%d",&arr[i]);
    }for(i=0 ; i<req ; i++){
        temp = arr[i];
        for(j = i+1 ; j<req ; j++){
            if(temp == arr[j]){
                printf("True.\n");
                break;}
        }if(temp == arr[j])break;
        if(i == req-1)printf("False.\n");}
return 0;
}
