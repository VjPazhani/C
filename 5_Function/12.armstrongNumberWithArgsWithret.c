//Program to find armstrong number with type of  NO args and with return function type
#include<stdio.h>
    int armstrongNumber(int n);
int  main(){
    int n,num;
    printf("enter the number: ");
    scanf("%d",&n);
  
    num=armstrongNumber(n);
    if(num==n)
        printf("The number %d is a armstrong number\n",n);
    else
        printf("The number %d is not a armstrong number\n",n);
    
    return 0;    
}
int armstrongNumber(int n){
    int temp,sum=0,rem;
   temp=n;
    while(temp){
        rem = temp%10;
        sum+=rem*rem*rem;
        temp=temp/10;
    }
    
    return sum;
}