//progrma to print armstrong number
#include<stdio.h>
int main(){
    int i,n,temp,rem,result=0;
    printf("Enter the number:");
    scanf("%d",&n);
    temp = n;
    while(temp!=0){
        rem =temp%10;
        result+=rem*rem*rem;
        temp=temp/10;
    }
    if(result == n)
        printf("The number %d is armstrong\n",n);
    else
        printf("The number %d is not armstrong\n",n);

}