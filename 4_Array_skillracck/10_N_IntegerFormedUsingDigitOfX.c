/*Program must accept the array and digit x and the program must print yes if integer matches
 any one digit in x*/
 #include<stdio.h>
int main(){
    int i,N,temp,rem,flag=0,X;
    printf("Enter the size of an array: ");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
        printf("Enter the value of array a[%d]: ",i);
        scanf("%d",&a[i]);
        }
    printf("enter the digit: ");
    scanf("%d",&X);
    for(i=0;i<N;i++){
        temp=X;
        while(temp!=0){
        rem=temp%10;
        if(rem==a[i]){
            flag++;
        }
        temp=temp/10;
        }
    }
    if(flag==N){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
    }