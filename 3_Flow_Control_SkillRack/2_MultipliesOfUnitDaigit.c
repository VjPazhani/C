//program to print the multiplies of unit digit
#include<stdio.h>
int main(){
    int N,i,temp,unitDigit;
    printf("Enter the digit: ");
    scanf("%d",&N);
    printf("The multiplies of UnitDigit are ");
    temp = N;
    unitDigit = temp%10;
    if(unitDigit==0){
        unitDigit = 10;
    }
    for(i=1;i<=N;i++){
        if(i%unitDigit==0){
            printf("%d ",i);
        }
    }
    printf("\n");
}