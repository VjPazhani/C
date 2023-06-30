//program to find the prime number using function type NO ARGUEMENT NO RETURN VALUE
#include<stdio.h>
void checkPrimeNumber(); /* This is function Prototype.A function prototype is simply the declaration of a function that specifies function's name, parameters and return type. 
                            It doesn't contain function body.The function prototype is not needed if the user-defined function is defined before the main() function.*/
int main(){
   checkPrimeNumber(); //calls the function
   return 0;
}
//defining the user defined function
void checkPrimeNumber(){
    int i,n,flag=0;
    printf("Enter the positve number: ");
    scanf("%d",&n);
        if(n == 0 || n == 1){
            flag=1;}
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
            break;
            }
    }
    if(flag==1)
        printf("%d is not a prime number\n\n",n);
    else
        printf("%d is a prime number\n\n",n);
}
