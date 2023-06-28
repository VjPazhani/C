#include<stdio.h>
int main(){
    int i,N,temp,mul,rem;
    printf("enter the size of array: ");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
        printf("enter the value of an array a[%d]: ", i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++){
        temp=a[i],mul=1;
        while(temp){
            rem =temp%10;
            mul=mul*rem;
            temp=temp/10;
        }
        printf("%d\t",mul);
    }
    printf("\n");
}