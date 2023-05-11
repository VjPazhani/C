//-----------------use linker -lm when you use math.h header file type gcc 5----------------
//program for roots of quadratic function
#include<math.h>
#include<stdio.h>
int main (){
    double a,b,c,discriminant,root1,root2,realPart,imgPart;
    printf("Enter the coefficient: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    discriminant = b*b - 4*a*c;;
    //condition if the discriminant greater than 0
    if(discriminant>0){
        root1 = -b + sqrt (discriminant)/(2*a);
        root2 = -b - sqrt (discriminant)/(2*a);
        printf("root1 = %.2lf,root2 = %.2lf",root1,root2);
    }
    else if(discriminant ==0){
        root1 = root2 = b/(2*a);

        printf("root1 = root2 = %.2lf",root1);
    }
    else{
        realPart = -b/(2*a);
        imgPart = sqrt(-discriminant)/(2*a); //note we put sqrt(-discriminant) because if you get sqrt for-value u get i;
        printf("root1 = %.2lf + i%.2lf,root2 = %.2lf -i%.2lf\n",realPart,imgPart,realPart,imgPart);
    }

}

/*The standard form of a quadratic equation is:

ax2 + bx + c = 0, where
a, b and c are real numbers and
a != 0

The term b2; - 4ac is known as the discriminant of a quadratic equation. It tells the nature of the roots.

    If the discriminant is greater than 0, the roots are real and different.
    If the discriminant is equal to 0, the roots are real and equal.
    If the discriminant is less than 0, the roots are complex and different.

Formula to compute the roots of a quadratic equation
 
*/