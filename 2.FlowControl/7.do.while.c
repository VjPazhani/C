//progam to get inputs from user until input become zero and then add the inputs
#include<stdio.h>
int main(){
double n,sum=0;
for(;1;)
    {
        scanf("%lf",&n);
        if(n!=0)
        {
            sum+=n;
        }
        else
        {
            printf("%lf",sum);
            break;
        }
    }
}