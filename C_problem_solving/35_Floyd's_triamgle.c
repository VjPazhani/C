//Program to print the floyd triangle
#include<stdio.h>
int main(){
    int i,j,row,number=1;
    printf("Enter the number: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf("%d ",number);
            number++;
        }
        printf("\n");
    }

}