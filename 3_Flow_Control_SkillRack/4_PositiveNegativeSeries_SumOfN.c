//program to print sum of N number in the order of 1 -2 3 -4 5
#include<stdio.h>
int main(){
    int i,N,sum=0,num;
    printf("Enter the number: ");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        if(i%2==0)
            num = -i;
        else
            num = i;
        sum+=num;
    }
    printf("%d\n",sum);
}