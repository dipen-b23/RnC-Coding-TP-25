/*
Write a C program to find the union and intersection of two integer arrays.
Sample Input:
Enter the number of elements in first array: 4
Enter elements of first array: 1 2 3 4
Enter the number of elements in second array: 5
Enter elements of second array: 3 4 5 6 7
Output:
Union: 1 2 3 4 5 6 7
Intersection: 3 4
*/
#include <stdio.h>

int main() 
    {
        int a[20], b[20], uni[40], n1, n2, i, j, k = 0;
        printf("Enter size of first array: ");
        scanf("%d", &n1);
        printf("Enter elements of first array: ");
        for (i = 0; i < n1; i++) 
        scanf("%d", &a[i]);
        printf("Enter size of second array: ");
        scanf("%d", &n2);
        printf("Enter elements of second array: ");
        for (i = 0; i < n2; i++) 
        scanf("%d", &b[i]);
        for (i = 0; i < n1; i++) 
        {
            uni[k++] = a[i];
        }
        for (i = 0; i < n2; i++) 
        {
            int f = 0;
            for (j = 0; j < k; j++) 
            {
                if (b[i] == uni[j]) 
                {
                f = 1;
                break;
                }
            }
            if (f==0) 
            {
            uni[k++] = b[i];
            }
        }
        printf("\n Union: ");
        for (i = 0; i < k; i++) 
        {
            printf("%d ", uni[i]);
        }
        printf("\n Intersection: ");
        for (i = 0; i < n1; i++) 
        {
            for (j = 0; j < n2; j++)
            {
                if (a[i] == b[j]) 
                {
                printf("%d ", a[i]);
                break; 
                }
            }
        }
        return 0;
}

