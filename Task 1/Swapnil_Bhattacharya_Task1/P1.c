//Write a program to swap two numbers without a third variable.


#include <stdio.h>
void main()
{
   int a,b;
   printf("Enter 2 numbers to swap");
   scanf("%d%d",&a,&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("Swapped numbers are");
   printf("a= %d and b= %d",a,b);
}