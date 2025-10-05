//find and delete a string...
#include <stdio.h>
#include <string.h>
int find(char str[80], char sub[80])
{
int i=0,j=0,k=0;
int l=0,k1=0,cn[10],c=0;
l=strlen(sub);
while (str[i]!='\0') 
{
if (str[i]==sub[j]) 
{
i++;
j++;
k1=1;
if (j==l) 
{
cn[c++]= i - l + 1; 
j=0;
k=1;
}
}
else if(k1==1)
    {
    j=0;
    k1=0; 
    }
else
i++;
}
if (k==1) 
{
printf("\nSubstring is present %d time(s) at position(s)\t", c);
for(i=0;i<c;i++)
printf("%d\t",cn[i]);
}
else {
if (k==0)
printf("\nGiven sub-string is not present in the main string.");
}
return 0;
}
int del(char str[80], char sub[80])
{
int i=0,j=0,k=0;
int l=0,k1=0,cn[10],c=0;
l=strlen(sub);
while (str[i]!='\0') 
{
if (str[i]==sub[j]) 
{
i++;
j++;
k1=1;
if (j==l) 
{
cn[c++]= i - l + 1; 
j=0;
k=1;
}
}
else if(k1==1)
    {
    j=0;
    k1=0; 
    }
else
i++;
}
    if (k == 1) 
    {
    for (j = c - 1 ; j >= 0; j--) 
    { 
        int start = cn[j] - 1;
        i = start;
        while (str[i + l] != '\0') 
        {
            str[i] = str[i + l];
            i++;
        }
        str[i] = '\0';         
    }
    printf("Result: %s\n", str);
        } 
            else 
                {
                    printf("Substring not found.\n");
                }
                return 0;
    }
int main()
{
    char str[80], sub[80];
    int ch;
    printf("Enter a string \n");
    scanf(" %[^\n]", str);
    printf("Enter substring \n");
    scanf(" %[^\n]", sub);
    printf("Enter a choice \n 1. find a substring \n 2. delete a substring\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        find(str, sub);
        break;
    case 2:
        del(str, sub);
        break;
    default:
        printf("Invalid input\n");
    }
    return 0;
}