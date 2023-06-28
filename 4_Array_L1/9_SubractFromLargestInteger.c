#include<stdio.h>
int main(){
    int i,N,max;
    printf("enter the size of array: ");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
    printf("Enter the value of an array a[%d]: ",i);
    scanf("%d",&a[i]);
    }
        max = a[0];

    for(i=1;i<N;i++){
        if(a[i]>max)
        max=a[i];
                
    }
    for(i=0;i<N;i++){
        printf("%d\t",(max - a[i]));
    }
    printf("\n");
    return 0;
}