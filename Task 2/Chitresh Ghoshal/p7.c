//Write a program to reverse a string using recursion.

#include<stdio.h>
#include<string.h>
int reverse(char str[],int i, int j){
    if(i>=j) return 0;
    char t=' ';
    t=str[i];
    str[i]=str[j];
    str[j]=t;
    reverse(str,i+1,j-1);

}

void main(){
    printf("Enter string\n");
    char s[50];
    gets(s);
    printf("Original string: %s\n",s);
    reverse(s,0,strlen(s)-1);
    printf("Reversed string: %s\n",s);
    
}
