#include<stdio.h>
char main(){
    char c;
    printf("Enter the charecter: ");
    scanf("%c",&c);
    //check the input charecter matches with vowels in alphabet
    (c == 'a'||c == 'e'||c == 'i'||c == 'o'||c == 'u') ? 
        printf("%c is vowel\n",c ) : 
            printf("%c is consonant\n",c);
}