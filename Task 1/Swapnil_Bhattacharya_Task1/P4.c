/*Write a program in C to find all the prime numbers between two numbers input
by the user. */

#include<stdio.h>
void main()
{
   printf("Enter a range");
   int a,b;
   scanf("%d%d",&a,&b);
   if(a>b)
   {
    a=a+b;
    b=a-b;
    a=a-b;
   }
    printf("The prime numbers between %d and %d are: ",a,b);
    for(int i=a;i<=b;i++)
    {
    int c=0;
    for(int j=1;j<=i;j++)
    {
    if(i%j==0)c++;
    }
    if(c==2) 
    printf("%d  ",i);
    }
}