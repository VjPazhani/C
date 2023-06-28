#include<stdio.h>
int main(){
    int i=0,N,M,r;
    printf("enter the size of array: ");
    scanf("%d",&N);
    int a[N];
    printf("enter the number: ");
    scanf("%d",&M);
    while(M){
        r=M%6;
        a[i]=r;
        M=M/6;   
        i++;
    }
    for(i=i-1;i>=0;i--){
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;

}