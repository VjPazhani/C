/*Program must print the even numbers in an array in forward order
and follwed by even number in reverse order*/
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
            if(a[i]%2==0){
            printf("%d\t",a[i]);
                
            }
        }
        for(i=N-1;i>=0;i--){
            if(a[i]%2!=0){

            printf("%d\t",a[i]);
            }
        }
        printf("\n");
    }