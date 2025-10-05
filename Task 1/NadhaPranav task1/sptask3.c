#include<stdio.h>
int main() {
    int n,i,j,x= 0;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements : ");
    for(i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    int arr1[100];
    for(i = 0; i < n; i++) {
       int flag = 0;
        for(j = 0; j < x; j++) {
            if(arr[i] == arr1[j]) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            arr1[x++] = arr[i];
          }
        }

        printf("The new array : ");
        for(i = 0; i < x; i++) {
            printf("%d ",arr1[i]);
        }
        printf("\n");
        return 0;
    }