/*Check Palindrome: Implement a program that checks if a given string is a palindrome*/



#include <stdio.h>
#include <string.h>

int palindrome(char a[500])
{

   char rev[500];
   int len=0;
   len= strlen(a);
   int k=0;
   for(int i=len-1;i>=0;i--)
   {
    rev[k]=a[i];
    k++;
   }
   rev[k]='\0';
   if(strcmp(rev,a)==0)
   {
    return 1;
   }
   else
   {
    return 0;
   }
}

void main()
{
    char s[500];
    printf("Enter a string.\n");
    scanf("%[^\n]",s);

    int x=0;
    x= palindrome(s);
    if(x==1)
    {
        printf("String is palindrome");
    }
    else
    {
        printf("String is not palindrome");
    }
    
}
