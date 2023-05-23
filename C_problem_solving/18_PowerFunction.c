/*The error you are seeing: error: ld returned 1 exit status is from the linker 
ld (part of gcc that combines the object files) because it is unable to 
find where the function pow is defined.
Including math.h brings in the declaration of the various functions and not their definition. The def is present in the math library libm.a. You need to link your program with this library so that the calls to functions like pow() are resolved.*/
#include<math.h>
#include<stdio.h>
int main(){
double base,exp,result;
printf("Enter the base: ");
scanf("%lf", &base);
printf("Enter the exp: ");
scanf("%lf",&exp);
result = pow(base,exp);
printf("%.1lf^%.1lf = %.2lf\n", base,exp,result);
}
//--------------- use gcc 18_PowerFunction.c -lm to compile--------------------------------------