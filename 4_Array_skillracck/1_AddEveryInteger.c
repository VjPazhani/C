//Program must add every two integer and print their output
#include<stdio.h>
int main(){
    int i,N,sum=0;
    printf("Enter the size of array: ");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
    printf("Enter the value for array a[%d]: ",i);
     scanf("%d",&a[i]);
    }
    for(i=0;i<N-1;i++){
        sum=a[i]+a[i+1];
        printf("%d\t",sum);
    }
        
        printf("\n");


}