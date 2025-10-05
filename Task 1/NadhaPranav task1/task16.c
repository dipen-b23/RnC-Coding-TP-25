#include<stdio.h>

void selection_sort(int arr[], int n) {
    int temp,min,i,j;
    for(i = 0; i < n-1; i++) {
        min = i;
        for(j = i+1; j < n; j++){
        if(arr[j] < arr[min])
            min = j;
        }
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
  }
}


int main() {
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements : ",n);
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }printf("\t");

    selection_sort(arr, n);
    printf("The largest and smallest elements in the array are : %d %d ",arr[n-1],arr[0]);
    return 0;
}