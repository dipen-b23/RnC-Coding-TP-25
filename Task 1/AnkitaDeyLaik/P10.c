/*
.Write a C program to check whether a given number is an Armstrong number or not.
An Armstrong number (also known as a narcissistic number) is a number that is equal to the sum of
its digits raised to the power of the number of digits.
Sample Input: 153
1^3+5^3+3^3=153
153 is an Armstrong number
*/
#include <stdio.h>
int main()
    {
        int num, d, c=0, sum=0, temp, power;
        printf("Enter a number \n");
        scanf("%d", &num);
        temp = num;
        while(temp>0)
        {
            c++;
            temp = temp/10;
        }
        temp = num;
        while(temp>0)
        {
            power = 1;
            d = temp%10;
            for(int i=0;i<c;i++)
            {
                power = power*d;
            }
            sum = sum + power;
            temp /= 10;
        }
        if(sum==num)
        printf("It is an Armstrong Number");
        else
        printf("It is not an Armstrong Number");
        return 0;
    }
