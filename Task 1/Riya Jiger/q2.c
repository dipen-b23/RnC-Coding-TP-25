//2. Logical Operators: Write a C program to check if a given year is a leap year using  logical operators (&&, ||).  
#include<stdio.h>
int main(){
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if((year%400==0) || (year%100!=0 && year%4==0))
    printf("The year %d is a leap year",year);
    else 
    printf("The year %d is not a leap year",year);
    return 0;
}