//program to print the lcm
#include<stdio.h>
int main(){
    int n1,n2,max;
    printf("Enter the number:");
    scanf("%d  %d",&n1,&n2);
    max = (n1>n2) ? n1 : n2;
    while(1){
        if(max%n1==0 && max%n1==0){
            printf("LCM is %d\n",max);
            break;
        }
        max++;
    }
}