#include<stdio.h>
int main(){
    int base,exp;
    float result =1.0;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exp: ");
    scanf("%d",&exp);
    for(;exp!=0;exp--){
        result *= base;
    }
    printf("Result is %.lf\n",result);
}