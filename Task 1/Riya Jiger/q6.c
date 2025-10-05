/*
6. Selection Sort: Implement the selection sorting algorithm and then find the smallest  
and largest element in an array.  
Sample Input: Enter the number of elements: 5  
Enter the elements: 12 7 3 15 9  
Output: Maximum element: 15 
Minimum element: 3 
*/
#include<stdio.h>
int main()
{   int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements");
    for(int i=0;i<n;i++)
    {scanf("%d",&arr[i]);}
    int max_ele=arr[0];
    int min_ele=arr[0];
    for(int i=1;i<n;i++)
   { if (max_ele<arr[i])
    {
        max_ele=arr[i];
    }

    if (max_ele>arr[i])
    {
        min_ele=arr[i];
    }
    
    }
    printf("Maximum element is %d\n",max_ele);
    printf("Minimum element is %d\n",min_ele);
    
    return 0;
}