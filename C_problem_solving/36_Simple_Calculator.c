//Progeam to create a simple calculator using switch method
#include<stdio.h>
#include<math.h>
int main(){
    char op;
    double first,second;
    printf("Enter the operation +, -, *, /  ^ : ");
    scanf("%c",&op);
    printf("Enter the first and second : ");
    scanf("%lf%lf",&first,&second);
    switch(op){
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", first,second,first+second); 
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", first,second,first-second);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", first,second,first*second);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf\n", first,second,first/second);
            break;
        case '^':
            printf("pow(%.1lf, %.1lf) = %.1lf\n", first, second, pow(first, second));

            break;
        default :
            printf("Error! you entered invalid operation\n");


    }
}