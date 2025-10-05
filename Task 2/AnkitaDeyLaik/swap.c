/*
Swapping Two Variables: Implement a program to swap two 
variables using pointers.
*/
#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter two numbers \n");
    scanf("%d %d", &a, &b);
    int *ptr1 = &a;
    int *ptr2 = &b;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("swapped numbers : a= %d \t b= %d \n", a, b);
}