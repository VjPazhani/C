// program to print n natural numbers when user enter the negative number it skips the current iteration
//and continue until the loop ends and also print the sum.
#include<stdio.h>
int main(){
    int i;
    double n,number,sum=0;
    printf("Enter the n: ");
    scanf("%lf",&n);
    for(i=1;i<=n;i++){
    printf("Enter the number%d : ",i);
    scanf("%lf",&number);
    if(number<0){
        continue;
    }
    sum += number;
    }
    printf("sum = %.2lf\n",sum);
}