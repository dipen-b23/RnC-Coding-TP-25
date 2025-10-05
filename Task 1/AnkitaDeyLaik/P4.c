// Write a program in C to find all the prime numbers between two numbers inputted by the user.
#include <stdio.h>

int main() 
{
    int l, u, i, f;
    printf("Enter lower limit: ");
    scanf("%d", &l);
    printf("Enter upper limit: ");
    scanf("%d", &u);
    printf("The prime numbers between %d and %d are: ", l, u);
    while (l <= u) 
    {
        f = 0;
        if (l > 1) 
        {
            for (i = 2; i <= l/2; i++) 
            {
                if (l % i == 0) 
                {
                    f = 1;
                    break;
                }
            }
            if (f == 0) 
            {
                printf("%d ", l);
            }
        }
        l++;
    }
    return 0;
}
