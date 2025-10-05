/*3. Right-Angled Triangle Check: Write a program that takes three sides of a triangle as
input and checks if they can form a right-angled triangle using conditional
statements.
Sample Input: Enter the three sides: 3 4 5
Output:
The given sides form a right-angled triangle. */

#include<stdio.h>
void main(){
    int a,b,c,h,p,ba;
    printf("Enter 3 sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        h=a; p=b; ba=c;
    }
    else if(b>a && b>c){
        h=b; p=a; ba=c;
    }
    else {h=c; p=a; ba=b;}
    if(h*h==p*p+ ba*ba)
    printf("%d %d %d form a right angled triangle", p,ba,h);
    else printf("%d %d %d do not form a right angled triangle", p,ba,h);
}
