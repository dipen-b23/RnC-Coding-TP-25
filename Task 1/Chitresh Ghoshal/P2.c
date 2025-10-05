/*Logical Operators: Write a C program to check if a given year is a leap year using
logical operators (&&, ||).*/


#include <stdio.h>
void main()
{
   int year;
   printf("Enter the year to be checked");
   scanf("%d",&year);
   int temp=year;
   if(year%4==0 && year%100!=0 || year%400==0)
   {
    printf("%d is a leap year", temp);
   }
   else
   {
    printf("No its not a leap year");
   }
   //return 0;
}