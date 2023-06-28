#include<stdio.h>
int main(){
    int i,N,sum=0,X,temp,rem;
    printf("enter the size of array: ");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
    printf("Enter the value of an array a[%d]: ",i);
    scanf("%d",&a[i]);
    }
    printf("Enter the value: ");
    scanf("%d",&X);
    for(i=0;i<N;i++){
        temp =a[i];
        while(temp){
            rem=temp%10;
            if(rem==X){
            sum=sum+a[i];
        }
        temp=temp/10;
    }
   }
    printf("%d\n",sum);
    return 0;;
}