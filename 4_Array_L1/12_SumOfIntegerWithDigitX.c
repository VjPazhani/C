#include<stdio.h>
int main(){
    int i,N,X,sum=0,temp,count;
    printf("enter the size of array: ");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
    printf("Enter the value of an array a[%d]: ",i);
    scanf("%d",&a[i]);
    }
    printf("Enter the digit: ");
    scanf("%d",&X);
    for(i=0;i<N;i++){
        temp=a[i];
        count=0;/////////important
        while(temp){
            temp/=10;
            count++;
        }
        if(count==X){
            sum=sum+a[i];
        }
    }
    if(sum==0){
        printf("-1\n");
    }
    else
        printf("%d\n",sum);
    
    return 0;

}