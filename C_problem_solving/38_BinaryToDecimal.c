//program to convert binary to decimal nummber
#include<stdio.h>
#include<math.h>
int main(){
    int i,r,sum=0,n,temp;
    printf("Enter the Binary number to find Decimal: ");
    scanf("%d",&n);
    temp=n;
    for(i=0;temp!=0;i++){
        r=temp%10;
        sum=sum+r*pow(2,i);
        temp=temp/10;
    }
    printf("%d\n",sum);
}