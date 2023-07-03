//program to find palindrome with type of NoAr NoRet
#include<stdio.h>
void checkPalindrome();

int main(){
    checkPalindrome();
    return 0;
}
void checkPalindrome(){
    int n,temp,rem,rev=0;
    printf("Enter the number to check the number is palindrome: ");
    scanf("%d",&n);
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
