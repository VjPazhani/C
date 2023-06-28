#include<stdio.h>
int main(){
    int i,N,sum=0;
    printf("enter the size of array: ");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
    printf("Enter the value of an array a[%d]: ",i);
    scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++){
        if(a[i]<0)
            sum=sum-a[i];
        else
            sum=sum+a[i];
        /*temp=a[i];
        if(temp<0){
        temp=-a[i];
        }
        sum+=temp;*/
    }
    printf("%d\n",sum);
}