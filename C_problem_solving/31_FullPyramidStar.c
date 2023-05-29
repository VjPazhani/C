#include<stdio.h>
int main(){
    int i,rows,space,k;
    printf("Enter the number of row: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(space=i;space<=rows-1;space++){
            printf(" ");
        }
        k=1;
        while(k<=2*i-1){
            printf("*");
            k++;
        }
        printf("\n");
    }

}