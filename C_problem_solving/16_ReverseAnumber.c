//program for print the reverse number
#include<stdio.h>
int main(){
int n,reverse =0,remainder;
printf("enter the number: ");
scanf("%d",&n);
for(;n!=0;n=n/10){
   remainder = n%10;
   reverse = reverse * 10 + remainder; 
}
printf("The reverse of number is %d\n",reverse);
}