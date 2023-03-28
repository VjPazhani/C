//Program to print the number if it is negative

#include<stdio.h>

int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a<0)
    {
        printf("%d is negative",a);
    }
}