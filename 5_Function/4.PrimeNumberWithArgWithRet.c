//program to find prime number with function of with arguement with return value
#include<stdio.h>
int checkPrimeNumber(int n);
int main(){
    int n,flag;
       printf("Enter the number: ");
    scanf("%d",&n);
    flag = checkPrimeNumber(n);
  if(flag==1)
        printf("%d is not a prime number\n",n);
    else
        printf("%d is  a prime number\n",n);
 
    return 0;
}
int checkPrimeNumber(int n){
    if(n==0||n==1)
        return 1; //---------------important---------------
    int i;
    for(i=2;i<n/2;i++){
        if(n%i==0)
        return 1; //----------------important---------------------
    }
   
    return 0;
}