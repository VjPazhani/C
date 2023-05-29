//program for full inverted oyramid
#include<stdio.h>
int main(){
    int i,j,space,row;
    printf("enter the row: ");
    scanf("%d",&row);
    for(i=row;i>=1;i--){
        for(space=0;space<row-i;space++){
            printf(" ");
        }
        for(j=i;j<=2*i-1;j++)
            printf("*");
        for(j=0;j<i-1;j++)
            printf("*" );
            printf("\n");
    
    }

}