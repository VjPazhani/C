//program to print the prime number between the intervals
#include<stdio.h>
int main(){
    int i,low,high,flag;
    printf("Enter the two intervals");
    scanf("%d %d",&low,&high);
    printf("The prime numbers %d and %d are" ,low,high);
    while(low<high){
        flag=0;
        if(low<=1){
            low++;
            continue;
        }
        for(i=2;i<=low/2;i++){
            if(low%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf(" %d\n",low);
            }
            low++;
    }
}