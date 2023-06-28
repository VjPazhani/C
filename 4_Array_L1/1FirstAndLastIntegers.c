#include<stdio.h>
int main(){
    int i,N,X;
    printf("Enter the Size of array: ");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
        printf("Enter the size of a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("enter the integr: ");
    scanf("%d",&X);
    for(i=0;i<N;i++){
        if(a[i]!=a[N-X+i])
        break;
    }
    if(i<X)
    printf("NO\n");
    else
    printf("YES\n");
    return 0;

}