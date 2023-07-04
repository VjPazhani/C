//Program to find armstrong number with type of no args and no return function type
#include<stdio.h>
    void armstrongNumber();
int  main(){
    armstrongNumber();
   return 0;
}
void armstrongNumber(){
     int n,temp,rem,sum=0;
    printf("enter the number: ");
    scanf("%d",&n);
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