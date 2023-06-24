#include<stdio.h>
void main(){
    int num;
    //Get the input from user
    printf("Enter the number: ");
    scanf("%d",&num);
    //check wheather number is odd or even and print the desired result
    (num%2==0) ? printf("%d is even",num) : printf("%d is odd",num);
}
