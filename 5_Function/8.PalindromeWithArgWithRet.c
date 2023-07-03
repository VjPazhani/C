#include <stdio.h>
int checkPalindrome(int n);

int main(){
    int n,rev;
    printf("Enter the number to check the number is palindrome: ");
    scanf("%d",&n);
    rev=checkPalindrome(n);
    if(rev==n)
        printf("%d is a palindrome\n",n);
    else    
        printf("%d is not a palindrome\n",n);

}
int checkPalindrome(int n){
    int temp,rem,rev=0;
    temp=n;
    while(temp){
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    return rev;
}