//Write a program to reverse a string using recursion.
#include <stdio.h>

void rev() 
{
    char str;
    scanf("%c", &str);
    if (str != '\n') 
    {
        rev();
        printf("%c", str);
    }
}
int main() 
{
    printf("Enter a sentence: ");
    rev();
    return 0;
}
