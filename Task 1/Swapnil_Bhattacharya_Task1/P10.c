/*Write a C program to check whether a given number is an Armstrong number or not.
An Armstrong number (also known as a narcissistic number) is a number that is equal to the sum of
its digits raised to the power of the number of digits.*/

#include<stdio.h>
#include<math.h>
int main()
{
    printf("Enter a number");
    int n;
    scanf("%d",&n);
    int t=n,c=0;
    while(t>0)
    {
        t=t/10;
        c++;
    }
    t=n;
    int d=0;
    double s=0;
    while(t>0)
    {
        d=t%10;
        s=s+pow(d,c);
        t/=10;
    }
        if((int)s==n) printf("%d is an armstrong number",n);
        else printf("%d is not an armstrong number",n);
        return 0;


}