/*Check Palindrome: Implement a program that checks if a given string is a palindrome. */

#include<stdio.h>
#include<string.h>
int palindrome(char a[]){
    char rev[strlen(a)];
    int x=0;
for(int i=strlen(a)-1; i>=0;i--){
rev[x++]=a[i];
}
rev[x]='\0';
if(strcmp(a,rev)==0)
return 1;
return 0;
}

void main(){
printf("Enter a word\n");
char str[50];
gets(str);
if(palindrome(str))
printf("%s is Palindrome", str);
else printf("%s is Not palindrome", str);

}