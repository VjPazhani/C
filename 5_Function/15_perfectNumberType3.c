//program for perfect number type of with arguement no return value
#include<stdio.h>
void perfectNumber(int n);
void main(){
     int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    perfectNumber(n);

}
void perfectNumber(int n){
    int i,sum=0;
    for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        printf("It is a perfect number\n");
    }
    else{
        printf("It is not a perfect number");
    }

}