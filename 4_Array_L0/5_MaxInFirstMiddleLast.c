/*Program must print the maximum number between first ,middle and last integer*/
#include<stdio.h>
    int main(){
        int i, max,N;
            printf("Enter the size of an array: ");
            scanf("%d",&N);
        int a[N];
        for(i=0;i<N;i++){
            printf("Enter the value of an array a[%d]: ",i);
            scanf("%d",&a[i]);        
        }
            max=a[0];
            if(max>a[N/2]){
                if(max>a[N-1]){
                    printf("%d",max);
                }
                else{
                    
                    printf("%d",a[N-1]);
             }
            }
            else {
                max =a[N/2];
                if(max>a[N-1]){
                    printf("%d",max);

                }
                else{
                    printf("%d",a[N-1]);

                }
            }
            printf("\n");
        }