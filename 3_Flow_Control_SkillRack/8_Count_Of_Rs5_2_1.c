#include<stdio.h>
int main(){
    int N,temp,c1,c2,c3,c4,c5;
    printf("Enter the number : ");
    scanf("%d",&N);
    temp=N;
    c1=temp/5;
    c2=temp%5;
    c3=c2/2;
    c4=c2%2;
    c5=c4/1;
    if(c2==0){
        printf("Count of Rs 5:%d\n",c1);
    }
    else if(c3==0){
        printf("Count of Rs 5:%d\nCount of Rs 2:%d",c1,c2);

    }
    else{
        printf("Count of Rs 5:%d\nCount of Rs 2:%d\nCount of Rs 1:%d\n",c1,c3,c5);

    }
    
}