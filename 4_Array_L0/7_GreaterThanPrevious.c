/*Program must accept the integers and print the value tha is greater than previous value*/
#include<stdio.h>
int main(){
    int i,N;
    printf("Enter the size of an array: ");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
    printf("Enter the value of an array a[%d]:",i);
    scanf("%d",&a[i]);
    }
    printf("%d\t",a[0]);
    for(i=1;i<N;i++){
        if(a[i]>a[i-1]){
            printf("%d\t",a[i]);
        }
    }
    printf("\n");
}