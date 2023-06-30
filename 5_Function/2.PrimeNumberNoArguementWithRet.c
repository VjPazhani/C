//program to find prime number with type of No arguement with return vale
#include<stdio.h>

int checkPrimeNumber();

void main(){
    int i,n,flag=0;
    n=checkPrimeNumber();
    if(n==0||n==1)
        flag=1;
    for(i=2;i<n/2;i++){
        if(n%i==0)
        flag=1;
        break;
    }
    if(flag==1)
        printf("%d is not a prime number\n",n);
    else
        printf("%d is  a prime number\n",n);
}
int checkPrimeNumber(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    return n;
}