/*N intgers passed to program and program must print the negative integer followed by zeros
and positve integer*/
#include<stdio.h>
int main(){
    int i,N;
    printf("Enter the size of an array: ");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
    printf("Enter the value of an array a[%d]: ",i);
    scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++){
        if(a[i]<0){
        printf("%d\t",a[i]);
        }
    }
    for(i=0;i<N;i++){
        if(a[i]==0){
        printf("%d\t",a[i]);
        }
    }
    for(i=0;i<N;i++){
        if(a[i]>0){
        printf("%d\t",a[i]);
        }
    }
    printf("\n");
    return 0;
}