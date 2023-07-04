//Program to find armstrong number with type of  NO args and with return function type
#include<stdio.h>
    int armstrongNumber();
void  main(){
    int n;
    n=armstrongNumber();
    int temp,rem,sum=0;
    temp=n;
    while(temp){
        rem = temp%10;
        sum+=rem*rem*rem;
        temp=temp/10;
    }
    if(sum==n)
        printf("The number %d is a armstrong number\n",n);
    else
        printf("The number %d is not a armstrong number\n",n);
    
}
int armstrongNumber(){
     int n;
    printf("enter the number: ");
    scanf("%d",&n);
  
   return n;

}