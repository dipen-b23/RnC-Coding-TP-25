/*Find Triplet with Given Sum: Write a program to find three elements in an array that
add up to a given sum. */


#include<stdio.h>

void main()
{
    int n,s;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    
    int a[n];
    int c=0;
    
    printf("Enter array elements: ");
    for(int i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter desired sum: ");
    scanf("%d",&s);
    
    printf("Triplets with sum %d: ", s);
    for(int i=0;i<n-2;i++) 
    {
        for(int j=i+1;j<n-1;j++) 
        {
            for(int k=j+1;k<n;k++) 
            {
                if (a[i]+a[j]+a[k]==s) 
                {
                    printf("(%d, %d, %d)\t",a[i],a[j],a[k]);
                    c++;
                }
            }
        }
    }
    
    if (c==0) 
    {
        printf("\nNo triplet for the given sum in the array.\n");
    }
}