#include<stdio.h>
int main(){
    int i,N,flag=0;
    printf("enter the size of array: ");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
        printf("enter the value of an array a[%d]: ", i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<N-2;i++){
        if(a[i]<a[0]||a[i]>a[N-1])
            flag=1;
            break;
    }
    if(flag==0){
        printf("YES");
    }
    else{
    printf("No");

    }
    printf("\n");
    return 0;
   
    }