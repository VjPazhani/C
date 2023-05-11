//Program to print the sum of natural numbers
#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter the Positive number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum += i;
    }
    printf("Sum of %d is %d\n",n,sum);
}