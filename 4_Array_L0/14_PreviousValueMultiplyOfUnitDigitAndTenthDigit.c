/*Program must accept an array an print the value of by multiply the prevoious integers 
unit and digit other than first integer of an array*/
#include<stdio.h>
int main(){
    int i,N,sum,unit_digit,tenth_digit,temp;
    printf("Enter the size of an array: ");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
        printf("Enter the value of array a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<N-1;i++){
        temp =a[i-1];
        unit_digit = temp%10;
        tenth_digit = (temp%100)/10;
        sum = unit_digit*tenth_digit;
        printf("%d\t",sum);
        unit_digit = tenth_digit=0;
    }

    printf("\n");
}