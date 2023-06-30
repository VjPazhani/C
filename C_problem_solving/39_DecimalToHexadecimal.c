//program to conver the given decimal to hexadecimal
#include<stdio.h>
int main(){
    long int dec,q,l,m,rem=0;
    int temp;
    char s;
    printf("Enter the decimal number to convert: ");
    scanf("%ld",&dec);
    q = dec;
    for(l = q; l > 0; l = l/16){
        temp = l%16;
        if(temp < 10)
            temp = temp+48;
        else
            temp = temp+55;
        
    rem=rem*100+temp;
    }
    printf("The hexadecimal number for %ld is ", dec);
    for(m=rem;rem>0;m=m/100){
        s = m%100;
        printf("%c",s);
    } 
      printf("\n");
      return 0;
}