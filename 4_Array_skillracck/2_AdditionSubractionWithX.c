/*program must accept one array and an X integer if the value of an array is even the value
    then add value of array with X integer get from user else subbract the array with X integer
    print the resultant value */
#include<stdio.h>
int main(){
    int i,X,N,sum;
    printf("Enter the size of an array: ");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
        printf("Enter the value for array a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter an Integer: ");
    scanf("%d",&X);
    for(i=0;i<N;i++){
        if(a[i]%2==0){
            sum=a[i]+X;
                printf("%d\t",sum);
                }
        else{
            sum=a[i]-X;
                printf("%d\t",sum);
        }
    }
    printf("\n");
}