/*Program must print the integer that should end with 10*/
#include<stdio.h>
    int main(){
        int i, unitDigit,N,flag=0;
            printf("Enter the size of an array: ");
            scanf("%d",&N);
        int a[N];
        for(i=0;i<N;i++){
            printf("Enter the value of an array a[%d]: ",i);
            scanf("%d",&a[i]);
        }
        for(i=0;i<N;i++){
            unitDigit=a[i]%100;
            if(unitDigit==10){
                printf("%d ",a[i]);
                flag=1;
            }
        } 
        if (flag==0){
        printf("-1");
        }
        printf("\n");
    }