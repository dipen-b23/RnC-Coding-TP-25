//swapping 2 numbers without using a third variable
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 numbers \n");
    scanf("%d, %d", &a, &b);
    printf("Before swapping: \n a = %d \t b = %d \n", a, b);
    b = a+b;   
    a = b-a;
    b = b-a;
    printf("After swapping: \n a = %d \t b = %d \n", a, b);
    return 0;
}
