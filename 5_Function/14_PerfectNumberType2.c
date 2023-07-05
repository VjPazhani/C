//program for perfect number type of no arguement with return value
#include<stdio.h>
int perfectNumber();
void main(){
    int n;
    n=perfectNumber();
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
int perfectNumber(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    return n;
 


}