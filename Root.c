/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c ;
    float d,root1,root2 ; //d for discriminant

    printf("Input the value of a b and c (a b c)") ;
    scanf("%d %d %d",&a,&b,&c) ;
    
    printf("In term of ax^2 + bx + c = %dx^2 + %dx + %d\n",a,b,c) ;
    
    d = b * b - 4 * a * c;
    
    if (d > 0) 
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        if (d == 0) 
        {
            printf("Both roots  are real and equal : %.2f\n", root1);
        } 
        else 
        {
            printf("The roots of polynomial are x1 = %.2f and x2 = %.2f\n", root1, root2);
        }
    }       
    else 
    {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-d) / (2 * a);
        printf("Root 1 = %.2f + %.2fi and Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
    
    return 0 ;
}