//program for factors of a given number
#include<stdio.h>
int main(){
    int i,num;
    printf("Enter the number:");
    scanf("%d",&num);
        printf("Factor for %d are ",num);

    for(i=1;i<=num;i++){
        if(num%i==0)
        printf("%d, ",i);
    }
}