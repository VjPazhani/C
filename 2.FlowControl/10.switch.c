//Program to develop a simple calculator using switch case
#include<stdio.h>
int main(){
    char operation;
    float n1,n2;
    printf("enter the operation(+,-,*,/)");
    scanf("%c",&operation);
    printf("Enter the n1:");
    scanf("%f",&n1);
    printf("Enter the n2:");
    scanf("%f",&n2);
    switch(operation){
        case '+':
            printf("%f + %f = %1f",n1,n1,n1+n2);
            break;
        case '-':
            printf("%f - %f = %1f",n1,n1,n1-n2);
            break;
        case '/':
            printf("%f / %f = %1f",n1,n1,n1/n2);
            break;
        case '*':
            printf("%lf * %f = %1f",n1,n1,n1*n2);
            break;
            
    }
    

}