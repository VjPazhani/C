/*program must accept the array and multiply with 2 get from user and compare the integer not end 
with 2 if does print the value multiply by 2 */

#include<stdio.h>
int main(){
    int i,N,temp,rem,flag;
    printf("Enter the size of an array: ");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
        printf("Enter the value of array a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++){
        temp=a[i]*2;
        while(temp){
            rem=temp%10;
            if(rem==2){
                break;
            }
            temp=temp/10;
        }
        if(temp==0){
        printf("%d\t",a[i]*2);
        flag=1;
        }
    }
    if(flag==0){
            printf("-1");
        }

    printf("\n");
    }