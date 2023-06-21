#include<stdio.h>
int main(){
    int A,B,C,D,X,totalAmount,rem;
    printf("Enter the number of each rupees : ");
    scanf("%d ",&A);
    scanf("%d ",&B);
    scanf("%d ",&C);
    scanf("%d ",&D);
    scanf("%d",&X);
    totalAmount = A*1 + B*2 + C*5 + D*10;
    if(totalAmount==X){
        printf("PAID\n");
    }
    else if(totalAmount>=X){
        rem =totalAmount - X;
        printf("PAID %d\n",rem);
    }
    else{
        rem = X - totalAmount;
        printf("PAID %d\n",rem);

    }
}