// program to print n natural numbers when user enter the negative number it only print the previous sums
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
        break;
    }
    sum += number;
    }
    printf("sum = %.2lf\n",sum);
}