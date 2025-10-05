/* 6. Selection Sort: Implement the selection sorting algorithm and then find the smallest
and largest element in an array.
Sample Input: Enter the number of elements: 5
Enter the elements: 12 7 3 15 9
Output: Maximum element: 15
Minimum element: 3 */



#include <stdio.h>
void main()
{
    int n,i,j,smallest,largest,small,pos;
    int a[50];
    printf("Enter the range of array(must be less than 50)");
    scanf("%d", &n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);  
    }
    for(i = 0; i < n-1; i++)
    { 
       pos = i; small = a[i];
          for(j=i+1; j<n; j++) 
            { 
                 if(small > a[j]) 
                    {
                      pos = j;
                      small = a[j];
                    }
            }
        a[pos] = a[i]; 
        a[i] = small;
    }
    smallest=a[0];
    largest=a[n-1];
    printf("Smallest element: %d",smallest);
    printf("largest element: %d",largest);
}