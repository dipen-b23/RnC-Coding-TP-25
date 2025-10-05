/*
Find Triplet with Given Sum: Write a program to find three elements in an array that
add up to a given sum.
Sample Input: Enter the number of elements: 5
Enter elements: 1 2 3 4 5
Enter the desired sum: 9
Output: Triplets with sum 9: (2, 3, 4)
*/
#include <stdio.h>
int main()
{
    int a[10], i, j, k, temp, n, sum, c=0, min, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    scanf("%d", &a[i]);

    if(n<3)
    {
        printf("Invalid Choice");
        return 0;
    }
    for(i=0;i<n-1;i++) 
        {
            min=a[i];
            pos=i;
            for(j=i+1;j<n;j++)
            {
                if(a[j]<min)
                {
                    min=a[j];
                    pos=j;
                }
            }
            temp=a[i];
            a[i]=min;
            a[pos]=temp;
        } 
    printf("Enter the desired sum: ");
    scanf("%d", &sum);
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(a[i]+a[j]+a[k]== sum)
                {
                printf("Triplet of total sum %d: %d, %d, %d\n", sum, a[i], a[j], a[k]); 
                return 0;
                }
            }
        }
    }
    printf("No triplets found");
    return 0;
}
