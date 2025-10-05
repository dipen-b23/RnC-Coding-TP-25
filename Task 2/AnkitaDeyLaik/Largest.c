//Find the Largest Element in Array using a recursive function.
#include <stdio.h>

int max(int a, int b)
{
    return a>b?a:b;
}

int findMax(int A[], int n)
{
    if (n == 1)
    return A[0];
    return max(A[n-1], findMax(A, n-1));
}
int main()
{
    int arr[80];
    int n=0;
    printf("Enter size of array \n");
    scanf("%d", &n);
    printf("Enter array elements \n");
    for(int i =0; i<n; i++)
    scanf("%d",&arr[i]);
    printf("Largest in given array is %d \n", findMax(arr, n));
    return 0;
}
