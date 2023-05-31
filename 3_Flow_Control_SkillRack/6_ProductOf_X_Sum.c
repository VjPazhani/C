//program to print the product of digit and it sumed with another digit
#include<stdio.h>
int main(){
    int X,N,sum=0,temp,rem=0;
    printf("Enter the Two Digit: ");
    scanf("%d %d",&N,&X);
    temp=N;
    while(temp!=0){
        rem=temp%10;
        sum+=rem;
        temp=temp/10;
        
    }
    printf("%d*%d=%d\n",sum,X,sum*X);

}