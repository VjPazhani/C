/**/
#include<stdio.h>
int main(){
    int i,N,val;
    printf("Enter the size of an array: ");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
        printf("Enter the value of array a[%d]: ",i);
        scanf("%d",&a[i]);
        }
    for(i=N-1;i>=0;i--){
        if(a[i]%2!=0){
            val=i;
            break;
        }
        
    }
    for(i=val;i>=0;i--){
        printf("%d\t",a[i]);
    }
    printf("\n");
        return 0;

        }