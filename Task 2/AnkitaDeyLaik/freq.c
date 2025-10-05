/*Write a C program to 
count the frequency of each vowel in a given string.*/
#include <stdio.h>
int main()
{
    char str[80];
    int k=0;
    int a=0,e=0,o=0,u=0,i=0;
    printf("Enter a string \n");
    scanf("%[^\n]s", str);
    while(str[k]!='\0')
    {
        if(str[k]=='a' || str[k]=='A') 
        a++;
        else if(str[k]=='e' || str[k]=='E') 
        e++;
        else if(str[k]=='i' || str[k]=='I') 
        i++;
        else if(str[k]=='o' || str[k]=='O') 
        o++;
        else if(str[k]=='u' || str[k]=='U') 
        u++;
        k++;
    }
    printf("a = %d\n",a);
    printf("e = %d\n",e);
    printf("i = %d\n",i);
    printf("o = %d\n",o);
    printf("u = %d\n",u);
    return 0;
}
