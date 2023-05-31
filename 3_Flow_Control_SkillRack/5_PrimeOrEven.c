//program to check that the given number is prime or even
#include<stdio.h>
int main(){
    int i,N,count=0;
    printf("Enter the number: ");
    scanf("%d",&N);
    if(N==0||N==1)
        count=1;
    for(i=2;i<=N/2;i++){
        if(N%i==0)
            count=1;
            break;
            
    }
    if(count==0 || N%2==0)
        printf("Valid\n");
    else
        printf("Invalid\n");
}