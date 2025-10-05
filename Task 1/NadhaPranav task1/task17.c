#include <stdio.h>
int main() {
    int n,marked;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements : ");
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    int sum;
    printf("Enter the desired sum : ");
    scanf("%d",&sum);
    printf("Triplets : ");
    for(int i = 0; i < n - 2; i++) {
        for(int j = 0; j < n - 1; j++) {
            for(int k = 0; k < n; k++) {
                if(arr[i] != arr[j]  && arr[j] != arr[k] && arr[k] != arr[i] && arr[i] + arr[j] + arr[k] == sum)
                printf("(%d, %d, %d) ", arr[i],arr[j],arr[k]);
                marked = 1;
            }
        }
    }
    if(!marked)
    printf("Triplets not found.");
    
    return 0;
}