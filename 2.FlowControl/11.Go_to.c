//Program to print the average and sum of the natural number
//If user enter an negative number display the average and sum
#include<stdio.h>
int main(){
    int i,MaxInput;
    double average,n,sum = 0.0;
    printf("Enter the MaxInput : ");
    scanf("%d",&MaxInput);
    for(i=1;i<=MaxInput;i++){
        printf("Enter the n%d ",i);
        scanf("%lf",&n);
        if(n<0.0){
            goto jump;
        }
        sum += n;
    }
    jump:
        average = sum/(i-1);
        printf("Average = %lf\n",average);
        printf("sum = %lf\n",sum);
}