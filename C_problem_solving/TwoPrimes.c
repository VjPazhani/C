//TWO primes equas to given high
#include<stdio.h>
int main(){
    int i,low=2,high,flag,n,j=0,r,s,temp=0;
    printf("ENter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Even number: ");
    scanf("%d",&high);
    while(low<=high){
        flag=0;
        
        for(i=2;i<=low/2;i++){
            if(low%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            r=low;
            a[j]=r;
            j++;
           // printf(" %d\n",low);
            }
            low++;
            if(low==high){
            for(s=0;s>j-1;s--){
                if(a[s]+a[(j-1)-s]==high){
                temp=1;
                printf("%d\t%d\n",a[s],a[(j-1)-s]);
                break;
                }
            }
            if(temp==0)
                printf("-1\n");
             }
                
            
}
}