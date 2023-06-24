/*Program must accept an array and print the count of same integers present in an array 
that integer can be formed using sum of first snd last integer */
#include<stdio.h>
int main(){
    int i,N,temp,count=0;
    printf("Enter the size of an array: ");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
        printf("Enter the value of array a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++){
        temp=a[0]+a[N-1];
        if(temp==a[i])
        count++;
    }
    if(count==0)
    printf("-1\n");
    else
    printf("%d\n",count);
}