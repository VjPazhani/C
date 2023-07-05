//program for perfect number type of with arguement with return value
#include<stdio.h>
int perfectNumber(int n);
void main(){
     int n,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    sum=perfectNumber(n);
     if(sum==n){
        printf("It is a perfect number\n");
    }
    else{
        printf("It is not a perfect number");
    }

}
int perfectNumber(int n){
    int i,sum=0;
    for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    return sum;

}