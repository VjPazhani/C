// program to print n natural numbers when user enter the negative number it only print the previous sums
#include<stdio.h>
int main(){
    int i,n,sum=0;
    for(i=1;i<=n;i++){
    printf("Enter the number:" i);
    scanf("%d",&n);
    if(n<0)
        break;
    sum += sum;
    }
    printf("sum = %d",sum);
}