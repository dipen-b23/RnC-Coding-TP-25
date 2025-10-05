/*Write a program to display the following pattern. */

#include<stdio.h>
void main(){
printf("Enter height of pattern");
int h;
scanf("%d",&h);
    for(int i=1;i<=h;i++){
        for(int sp=h; sp>=i;sp--)
        printf(" ");
        for(int j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }
}