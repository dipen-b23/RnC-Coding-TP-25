//1.Write a program to swap two numbers without a third variable.
#include<stdio.h>
int main()
{int a,b;
    printf("Enter the values of a and b respectively");
    scanf("%d%d",&a,&b);
    a=a-b;
    b=b+a;
    a=b-a;
    printf("The swapped values of a and b are: a=%d and b=%d",a,b);
    return 0;
} 