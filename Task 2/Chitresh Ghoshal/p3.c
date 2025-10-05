//Write a C program to count the frequency of each vowel in a given string.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main(){
    printf("Enter string\n");
    char str[100];
    fgets(str,100, stdin);
    int a=0,e=0,i=0,o=0,u=0;
    for(int k=0;str[k]!='\0';k++){
        //char ch=tolower(str[k]);
        switch(str[k]){
            case 'a': 
            case 'A':a++;break;
            case 'E':
            case 'e': e++;break;
            case 'I':
            case 'i': i++; break;
            case 'O':
            case 'o':o++;break;
            case 'U':
            case 'u': u++;break;
        }
    }
        printf("Frequencies of a=%d, e=%d, i=%d, o=%d, u=%d",a,e,i,o,u);
}