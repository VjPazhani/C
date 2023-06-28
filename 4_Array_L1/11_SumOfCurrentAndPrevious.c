#include<stdio.h>
int main(){
    int i,N;
    printf("enter the size of array: ");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
    printf("Enter the value of an array a[%d]: ",i);
    scanf("%d",&a[i]);
    }
    printf("%d\t",(a[0]+a[N-1]));
    for(i=1;i<N;i++){
        printf("%d\t",(a[i-1]+a[i]));
    }
    printf("\n");
    return 0;
}