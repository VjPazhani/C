//program to print list of armstorng
#include<stdio.h>
#include<math.h>
int main(){
    int low,high,number,temp,rem,count;
    double result=0.0;
    printf("Enter the intervals :");
    scanf("%d %d",&low,&high);
    if(high<low){
        high = high + low;
        low = high - low;
        high = high -low;
    }
    for(number=low;number<=high;number++){
        temp = number;
        while(temp!=0){
        temp =temp/10;
        count++;
        }
        temp = number;
        while(temp!=0){
            rem= temp%10;
            result+=pow(rem,count);
            temp=temp/10;
        }
        if((int)result==number)
            printf("%d\n",number);
            result=0;
    count=0;
}
    

} 
