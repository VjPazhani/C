//Program to print the common factors of two numbers in the ascending order. 
//Note Print once a factor that divides a two number
#include<stdio.h>
int main(){
    int X,Y,i,j;
    printf("Enter the number X: ");
    scanf("%d",&X);
    printf("Enter the number Y: ");
    scanf("%d",&Y);
    printf("The common factors are ");
    for(i=1;i<=X||i<=Y;i++){
        if(X%i==0&&Y%i==0)
        printf("%d ",i);
    }
        printf("\n");

}