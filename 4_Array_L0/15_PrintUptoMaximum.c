/*program must print the integer upto maximum integer in an array*/
#include<stdio.h>
int main(){
    int i,N,max;
    printf("Enter the size of an array: ");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
        printf("Enter the value of array a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<N;i++){
        if(a[i]>a[i-1]){
            max=a[i];
        }
    }
    //---------------------important block----------------------
    for(i=0;i<N;i++){
    printf("%d\t",a[i]);
    if(a[i]==max){
        break;
        }

    }
    printf("\n");
    return 0;

}