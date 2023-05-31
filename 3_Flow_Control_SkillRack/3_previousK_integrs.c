//program to print the print the N-K to N as the input
//program must accept the two integer like N,K
#include<stdio.h>
int main(){
    int N,K,i,temp;
    printf("Enter the two digit : ");
    scanf("%d %d",&N,&K);
    printf("The Previous integer are ");
    temp = N - K;
    for(i=temp;i<=N;i++){
        printf("%d ",i);
    }
    printf("\n");
}