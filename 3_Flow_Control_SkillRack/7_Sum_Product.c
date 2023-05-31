//Program to print product of number is odd else print the sum of the number
#include<stdio.h>
int main(){
    int N,temp,rem,sum=0,mul=1;
    printf("Enter the number: ");
    scanf("%d",&N);
    temp = N;
    if(N%2==0){
        for(temp;temp!=0;temp=temp/10){
            rem = temp%10;
            sum +=rem;
        }
        printf("%d\n",sum);
    }
    else{
        for(temp;temp!=0;temp/=10){
            rem = temp%10;
            mul *=rem;
        }
        printf("%d\n",mul);
    }
}
