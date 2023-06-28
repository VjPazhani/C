//program to reverse last x digit
#include<stdio.h>
int main(){
    int i,j,N,X,Y,temp;
    printf("Enter the size of array: ");
    scanf("%d",&N);
    int a[N];
    printf("Enter the value for X: ");
    scanf("%d",&X);
    printf("Enter the value for Y: ");
    scanf("%d",&Y);
    temp=X;i=0;
        while(temp){
             a[i] = temp%10;
            temp=temp/10;
            i++;
        }
    
    for(i=i-1;i>=Y;i--){
        printf("%d",a[i]);
    }
    for(j=0;j<Y;j++)
        printf("%d",a[j]);


}
