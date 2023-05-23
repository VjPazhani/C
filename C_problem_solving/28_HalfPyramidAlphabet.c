//program for half pyramid of Alphabet
#include<stdio.h>
int main(){
    int i,j;
    char input,Alphabet='A';
    printf("Enter the Uppercase letter :");
    scanf("%c",&input);
    for(i=1;i<=(input - 'A'+1);i++){
        for(j=1;j<=i;j++){
            printf("%c ",Alphabet);
        }
        Alphabet++;
        printf("\n");
    }
}