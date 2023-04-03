//program to print the sum of n natural numbers
#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    i=1;
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("Sum = %d",sum);
}