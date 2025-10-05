#include <stdio.h>

void rowsum(int m, int n, int (*p)[n]) 
{
    for (int i = 0; i < m; i++) 
    {
        int s = 0;
        for (int j = 0; j < n; j++) 
        s += p[i][j];
        printf("Row %d sum = %d\n", i + 1, s);
    }
}
void colsum(int m, int n, int (*p)[n]) 
{
    for (int j = 0; j < n; j++) 
    {
        int s = 0;
        for (int i = 0; i < m; i++) 
        s += p[i][j];
        printf("Column %d sum = %d\n", j + 1, s);
    }
}
void transpose(int m, int n, int (*p)[n]) 
{
    for (int j = 0; j < n; j++) 
    {
        for (int i = 0; i < m; i++) 
        printf("%d ", p[i][j]);
        printf("\n");
    }
}
int main() 
{
    int m, n;
    printf("Enter Rows and columns \n");
    scanf("%d %d", &m, &n);
    int a[m][n];
    printf("Enter matrix elements \n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
            int ch;
            while (1) 
            {
                printf("Enter choice 1.Rows Sum  2.Column Sum  3.Transpose 4.Exit \n");
                scanf("%d", &ch);
            switch (ch) 
            {
            case 1: rowsum(m, n, a); 
            break;
            case 2: colsum(m, n, a); 
            break;
            case 3: transpose(m, n, a); 
            break;
            case 4:
            return 0;
            default: printf("Invalid\n"); 
        }
    }
}
