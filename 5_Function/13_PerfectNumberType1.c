//program for perfect number type of no arguement no return value
#include<stdio.h>
void perfectNumber();
void main(){
    perfectNumber();

}
void perfectNumber(){
    int i,n,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
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