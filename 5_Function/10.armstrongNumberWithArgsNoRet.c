//Program to find armstrong number with type of with args and no return function type
#include<stdio.h>
    void armstrongNumber();
int  main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    armstrongNumber(n);
   return 0;
}
void armstrongNumber(int n){
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