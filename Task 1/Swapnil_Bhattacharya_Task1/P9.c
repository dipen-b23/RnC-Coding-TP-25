/*. Check Symmetric Matrix: Implement a C program to check if a given matrix is
symmetric (i.e., matrix is equal to its transpose).
Sample Input: Enter the number of rows and columns: 3 3
Enter the matrix elements:
1 2 3
2 4 5
3 5 6
Output: The matrix is Symmetric.*/


#include <stdio.h>

int main() 
{
    int r, c, i, j, isSymmetric = 1;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    // Check if the matrix is square
    if (r != c) 
    {
        printf("Matrix must be square to be symmetric.\n");
        return 0;
    }

    int ar[r][c];

    printf("Enter the matrix elements:\n");
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
        {
            scanf("%d", &ar[i][j]);
        }
    }

    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
        {
            if (ar[i][j] != ar[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }
        if (isSymmetric==0)
            break;
    }

    if (isSymmetric!=0)
        printf("The matrix is Symmetric\n");
    else
        printf("The matrix is Not Symmetric\n");

    return 0;
}
