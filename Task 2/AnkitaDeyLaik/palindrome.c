//palindrome
#include <stdio.h>
int main()
    {
        char str[80];
        int i=0,c=0,f=1;
        printf("Enter a string \n");
        scanf("%s", str);
        
        while(str[i]!='\0')
        {
            c++;
            i++;
        }
        char *ptr1=&str[0];
        char *ptr2=&str[c-1];
        for(i=0;i<=c/2;i++)
        {
            if(*ptr1 != *ptr2 )
            {
                f=0;
                break;
            }
            ptr1 = ptr1+i;
            ptr2 = ptr2-i;
        }
        if(f==1)
        {
            printf("It is a Palindrome");
        }
        else
        {
            printf("It is not a Palindrome");
        }
    }