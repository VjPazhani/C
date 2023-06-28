//Program for print the binary digit for given number
#include<stdio.h>
int main(){
    int i=0,j,r,N,M;
    printf("Enter the size of array: ");
    scanf("%d",&N);
    int a[N];
    printf("Enter the number to find Binary: ");
    scanf("%d",&M);
    while(M){
        r=M%2;
        a[i]=r;
        M=M/2;
        i++;
    }   
    for(j=i-1;j>=0;j--){
        printf("%d",a[j]);
    }
    printf("\n");
}