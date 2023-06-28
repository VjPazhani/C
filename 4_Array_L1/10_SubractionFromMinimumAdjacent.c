#include<stdio.h>
int main(){
    int i,N,min;
    printf("enter the size of array: ");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
    printf("Enter the value of an array a[%d]: ",i);
    scanf("%d",&a[i]);
    }
    for(i=0;i<N-1;i++){
        min=0;
        if(a[i-1]>a[i+1]){
            min=a[i+1];
        }
        else{
            min = a[i-1];
        }
        printf("%d\t",(min-a[i]));        
    }
        printf("%d",(a[N-2]- a[N-1]));

    printf("\n");
    return 0;
}