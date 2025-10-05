/*
3. Right-Angled Triangle Check: Write a program that takes three sides of a triangle as  
input and checks if they can form a right-angled triangle using conditional  
statements.     
Sample Input:    Enter the three sides: 3 4 5  
Output:    
The given sides form a right-angled triangle.  
*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three sides:");
    scanf("%d%d%d",&a,&b,&c);
    if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
    printf("The given sides form a right-angled triangle.");
    else
    printf("The given sides do not form a right-angled triangle.");
    return 0;
}