#include <stdio.h>
void checkPalindrome(int n);

int main(){
    int n;
    printf("Enter the number to check the number is palindrome: ");
    scanf("%d",&n);
    checkPalindrome(n);
}
void checkPalindrome(int n){
    int temp,rem,rev=0;
    temp=n;
    while(temp){
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    if(rev==n)
        printf("%d is a palindrome\n",n);
    else    
        printf("%d is not a palindrome\n",n);

}