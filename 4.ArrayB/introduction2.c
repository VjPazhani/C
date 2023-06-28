//program for 1d array in dynamic
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int a[n];

    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++){
        printf("%d\n",a[i]);
    }
}