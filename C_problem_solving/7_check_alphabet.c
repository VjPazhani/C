//program to check wheather the charecter is alphabet or not
#include<stdio.h>
int main(){
    char c;
    printf("Enter the number");
    scanf("%c",&c);
    if((c >= 97 && c<= 122)||(c>= 65 && c<= 90)){ // important error multi-character character constant
        printf("%c is a alphabet\n",c);
    }
    else{
        printf("%c is not a alphabet\n",c);

    }
    return 0;
}