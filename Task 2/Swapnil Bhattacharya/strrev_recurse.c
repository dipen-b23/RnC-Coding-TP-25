//Write a program to reverse a string using recursion.

#include<stdio.h>
#include<string.h>

int rev(char s[],int i, int j)
{
    if(i>=j) 
    return 0;
    char t;
    t=s[i];
    s[i]=s[j];
    s[j]=t;
    rev(s,++i,--j);

}

void main()
{
    printf("Enter a string\n");
    char s[50];
    gets(s);
    printf("Initial string: %s\n",s);
    int x=strlen(s);
    rev(s,0,x-1);
    printf("Reversed string: %s\n",s);
}