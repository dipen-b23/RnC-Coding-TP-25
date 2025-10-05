/*Selection Sort: Implement the selection sorting algorithm and then find the smallest
and largest element in an array. */

#include<stdio.h>
void main(){
    printf("Enter size of array");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter %d values for array:",n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int min;

    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1; j<n;j++){
            if(a[j]<a[i])
            min=j;

            }
            int t=a[i];
            a[i]=a[min];
            a[min]=t;
        }
        printf("Sorted array is:\n");
        for(int i=0;i<n;i++)
        printf("%d\t",a[i]);
        printf("\n");
        printf("Smallest and largest values are %d and %d",a[0],a[n-1]);
    }
