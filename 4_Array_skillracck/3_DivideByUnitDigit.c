/*Program must accept an array and each value of an array should be divided by its unit digit
    and print the result with two precision.if the unit digit is zero then print the same value of an array
    with two precision
    ---------------------------------result= (double)a[i]/unitDigit;--------------------------------------------------
    */
    #include<stdio.h>
    int main(){
        int i, unitDigit,N;
        double result;
            printf("Enter the size of an array: ");
            scanf("%d",&N);
        int a[N];
        for(i=0;i<N;i++){
            printf("Enter the value of an array a[%d]: ",i);
            scanf("%d",&a[i]);
        }
        for(i=0;i<N;i++){
                 unitDigit=a[i]%10;
                if(unitDigit==0){
                    printf("%.2d ",a[i]);
                }
                else{
                     result= (double)a[i]/unitDigit;
                    printf("%.2lf ",result);
                }
           }
             printf("\n");
    }