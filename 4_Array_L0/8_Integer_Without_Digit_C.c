/*program must accept an array and digit as input and then the program must print integer by comparing 
it with digit */
#include<stdio.h>
int main(){
    int i,N,C,temp,rem,flag=0;
    printf("Enter the size of an array: ");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
        printf("Enter the value of array a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the digit to compare: ");
    scanf("%d",&C);
    for(i=0;i<N;i++){
        temp=a[i];
        while(temp){
            rem=temp%10;
            if(rem==C){
                break;
            }
            temp=temp/10;
        }
        if(temp==0){
        printf("%d\t",a[i]);
            flag=1;
        }
    }
    printf("\n");
    if(flag==0){
        printf("-1\n");
    }
    return 0;
}