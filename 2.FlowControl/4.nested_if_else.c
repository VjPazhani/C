//program to explain the nested if and else 
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Emter the number:");
    scanf("%d %d",&num1,&num2);
    if(num1>=num2){
        if(num1==num2){
            printf("%d and %d is equal",num1,num2);
        }
        else{
            printf("%d > %d\n",num1,num2);
        }
    }
    else{
        printf("%d < %d",num1,num2);
    }
}