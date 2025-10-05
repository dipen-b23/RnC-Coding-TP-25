#include<stdio.h>
int main() {
     int n,k;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements : ");
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of positions to shift : ");
    scanf("%d",&k);
    for(int i; i < k; i++) {
        int temp = arr[0];
        for(int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }
    printf("Rotated array : ");
    for(int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}