#include<stdio.h>
int main(){
    int i,N,K;
    printf("enter the size of array: ");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
        printf("enter the value of an array a[%d]: ", i);
        scanf("%d",&a[i]);
    }
    printf("enter the K value to compare: ");
    scanf("%d",&K);
    for(i=0;i<N;i++){
        if(a[i]<=K)
        break;
    }
    if(i==N)
    {
        printf("Yes");}
        else{
            printf("no");
        }
    printf("\n");
    return 0;
}