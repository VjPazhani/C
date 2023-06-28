//program for dynamic 2d array
#include <stdio.h>
int main(){
    int m,n;
    printf("Enter the sizes of the m: ");
    scanf("%d%d",&m,&n);
    int a[m][n];
            printf("Enter the values of array: ");

    for(int i=0;i<m;i++){
        for(int j =0;j<n;j++){
            printf("Enter the values of a[%d][%d]:", i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
    printf("\n");

    }
}