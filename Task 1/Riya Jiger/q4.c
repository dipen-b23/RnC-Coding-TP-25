/*
4. Write a program in C to find all the prime numbers between two numbers inputted  
by the user.   
Sample Input: Enter lower limit: 5 Enter upper limit: 15   
Output:  The prime numbers between 5 and 15 are: 7 11 13 
*/
#include<stdio.h>
#include<math.h>
int main()
{
int upper,lower;
printf("enter the lower limit:");
scanf("%d",&lower);
printf("enter the upper limit:");
scanf("%d",&upper);
printf("The prime numbers between %d and %d are:",lower,upper);
for(int i=lower+1;i<=upper;i++)
{int is_prime=1;
for(int j=2; j<=sqrt(i);j++)
  {
  if(i%j==0)
  {is_prime=0;
  break;
  }
}
  
if(is_prime==1 && i>1)
  {printf("%d\t",i);}
}
return 0;
}