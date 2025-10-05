/*
10.Write a C program to check whether a given number is an Armstrong number or not. 
An Armstrong number (also known as a narcissistic number) is a number that is equal to the sum of 
its digits raised to the power of the number of digits. 
Sample Input: 153 
1^3+5^3+3^3=153 
153 is an Armstrong number 
*/


#include<stdio.h>
#include<math.h>
int main(){
    int n,count=0,n1, r=0;
    long long sum=0;

    printf("Enter the number");
    scanf("%d",&n);
    n1=n;
    
    while(n!=0)
    {n=n/10;
    count++;}
    
    //printf("%d",count);
    while(n!=0)
    {r=n%10;
    sum+=pow(r,count);
    n=n/10;}
    if (n1==sum)
    printf("the given number is an armstrong number\n");
    else
    printf("the given number is not an armstrong number\n");

return 0;

   
}


