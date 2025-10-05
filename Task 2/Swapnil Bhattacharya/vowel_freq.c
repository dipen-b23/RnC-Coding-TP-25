//Write a C program to count the frequency of each vowel in a given string.

#include<stdio.h>
#include<string.h>

void main()
{
    printf("Enter string\n");
    char str[100];
    scanf("%[^\n]",str);
    int ca,ce,ci,co,cu;

    for(int k=0;str[k]!='\0';k++)
    {
        if(str[k]=='a' || str[k]== 'A')
        ca++;
        if(str[k]=='e' || str[k]== 'E')
        ce++;
        if(str[k]=='i' || str[k]== 'I')
        ci++;
        if(str[k]=='o' || str[k]== 'O')
        co++;
        if(str[k]=='u' || str[k]== 'U')
        cu++;
    }
        printf("Frequencies of a=%d, e=%d, i=%d, o=%d, u=%d",ca,ce,ci,co,cu);
}