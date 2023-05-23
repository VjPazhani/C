//program to print count of given digit
#include<stdio.h>
int main(){
    long long n;
    int count=0;
    printf("enter the number: ");
    scanf("%lld",&n);
    do{
        n /= 10;
        count ++;
    }while(n!=0);
    printf("The count of digit is %d\n",count);
}