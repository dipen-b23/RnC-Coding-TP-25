//Write a program that takes three sides of a triangle as input and checks if they can form a right-angled triangle using conditional statements.
#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c;
    double as,bs,cs;
    printf("Enter length of the 3 sides of a triangle \n");
    scanf("%lf, %lf, %lf", &a, &b, &c);
    as = pow(a,2);
    bs = pow(b,2);
    cs = pow(c,2);
    if(a+b>c && b+c>a && c+a>b)
    {
        if((as == bs+cs)||(bs == cs+as)||(cs == as+bs))
        printf("It is a right angled triangle \n");
        else
        printf("It is not a right angled triangle \n");
    }
    else
    printf("Error: It not a triangle \n");
}