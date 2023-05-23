//program to check given number is prime or not
//this is the error include because after run this program it give one is a prime number
//practically one is not a prie number
//run this program to understand 
#include<stdio.h>
int main(){
    int i,n,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count>2)
    printf("%d is not prime\n",n);
    else
    printf("%d is prime\n",n);

}