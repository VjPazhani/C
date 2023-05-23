//program for to find the GCD of two numbers
//Find GCD using for loop and if  statement
#include<stdio.h>
int main(){
    int i,n1,n2,gcd;
    printf("Enter the number n1 n2: ");
    scanf("%d %d",&n1,&n2);
    for(i=1;i<=n1&&i<=n2;i++){
        if(n1%i==0 && n2%i==0){
            gcd = i;
        }
        
    }
    printf("GCD is %d\n",gcd);

} 
