/*
Selection Sort: Implement the selection sorting algorithm and then find the smallest
and largest element in an array.
Sample Input: Enter the number of elements: 5
Enter the elements: 12 7 3 15 9
Output: Maximum element: 15
Minimum element: 3
*/
#include <stdio.h>
int main()
{
    int a[10], i, j, temp, n, min, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    scanf("%d", &a[i]);

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
        
        printf("Maximum element: %d \n", a[n-1]);
        printf("Minimum element: %d", a[0]);
    }