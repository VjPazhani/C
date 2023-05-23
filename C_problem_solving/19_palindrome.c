//program for to check given number is palindrome or not
#include<stdio.h>
int main(){
    int n,rev=0,rem,original;//----------original-----------
    printf("Enter the number :");
    scanf("%d",&n);
    original = n;
    for(;n!=0;n=n/10){
        rem=n%10;
        rev = rev*10+rem;
    }
    if(rev == original){
        printf("The number  %d is palindrome\n",original);
    }
    else{
        printf("The number  %d is  not palindrome\n",original);

    }

} 
/* why don't we compare the actual variable n to reverse instead we using original variable
The `original` variable is used in the above program to store the original input number b
efore it is reversed. 

In the `while` loop, the input number `n` is continuously divided by 10 and its digits are reversed. 
After the loop ends, the reversed number is stored in the `reversed` variable.

By comparing the `original` variable with the `reversed` variable, the program determines whether 
the original input number is a palindrome or not. If the two variables are equal, it means that the number remains the same when its digits are reversed, and hence it is a palindrome. If they are not equal, then the number is not a palindrome.

The `original` variable serves as a reference to compare with the reversed number 
and make the final determination.*/