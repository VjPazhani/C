//program to  reverse the last x digit
#include<stdio.h>
int main(){
    int i,N,X;
    printf("Enter the size of array: ");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
        printf("Enter the valur of array a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the value for X: ");
    scanf("%d",&X);
    for(i=N-1;i>=X-1;i--){
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}