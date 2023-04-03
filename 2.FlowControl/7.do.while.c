//progam to get inputs from user until input become zero and then add the inputs
#include<stdio.h>
int main(){
int n,sum=0;
for(;1;)
    {
        scanf("%d",&n);
        if(n!=0)
        {
            sum+=n;
        }
        else
        {
            printf("%d",sum);
            break;
        }
    }
}