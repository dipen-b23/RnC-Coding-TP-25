/*
Check Symmetric Matrix: Implement a C program to check if a given matrix is
symmetric (i.e., matrix is equal to its transpose).
Sample Input: Enter the number of rows and columns: 3 3
Enter the matrix elements:
1 2 3
2 4 5
3 5 6
Output: The matrix is Symmetric.
*/
#include <stdio.h>
int main()
{
    int a[10][10], i, j, k, temp, n, sum, c=0, min, pos;
    printf("Enter number of rows and columns: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
        scanf("%d", &a[i][j]);
    }
    }
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
        if(a[i][j]== a[j][i])
        c++;
    }
    }
    if(c==(n*n))
    printf("Symmetric Matrix");
    else
    printf("Non Symmetric Matrix");
}


