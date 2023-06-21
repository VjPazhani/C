#include<stdio.h>
int main(){
    int X,Y;
    double totalPrice, price;
    printf("Enter the number Of Books: ");
    scanf("%d",&X);
    printf("Enter the Books cost: ");
    scanf("%d",&Y);
    totalPrice = X*Y;
    if(X>=2||X>=4){
        price = totalPrice - totalPrice/10;
        printf("%.2lf",price);
    }
    else if(X==5){
        price = totalPrice - totalPrice/20;
        printf("%.2lf",price);

    }
    else if(X>=5){
        price = totalPrice - totalPrice/50;

        printf("%.2lf",price);

    }
    else{
        printf("%lf",totalPrice);
    }
}