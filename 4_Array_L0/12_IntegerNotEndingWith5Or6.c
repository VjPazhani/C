/*program must accept an array and integer and it hould squaare the each integer in array
  and add to integer that get from user then the program print modified value only if it is not
  equal to 5 or 6 otherwise print -1*/
  #include<stdio.h>
int main(){
    int i,N,temp,rem,X,flag=0;
    printf("Enter the size of an array: ");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
        printf("Enter the value of array a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the Value X: ");
    scanf("%d",&X);
    for(i=0;i<N;i++){
        temp=(a[i]*a[i]) + X;
        if(temp%10==5 || temp%10==6){
            flag++;
            continue;
        }
            printf("%d\t",temp);

    }
    if(flag==N)
    printf("-1");
    printf("\n");
   
    return 0;
    
    
}