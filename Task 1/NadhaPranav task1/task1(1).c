#include <stdio.h>
int main() {
    int a,b;
    printf("enter the two numbers : ");
    scanf("%d %d",&a,&b);
    a = a + b;
    b = a - b;
    a = a - b;

printf("The numbers after swapping are : %d %d",&a,&b);
return 0;
}