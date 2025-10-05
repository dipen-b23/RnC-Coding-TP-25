#include<stdio.h>
int main() {
    int n,m,i,j,x = 0,flag;
    printf("Enter the size of the first array : ");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter the elements : ");
    for(i = 0; i < n; i++) {
        scanf("%d",&arr1[i]);
    }

    printf("Enter the size of the second array : ");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter the elements : ");
    for(j = 0; j < m; j++) {
        scanf("%d",&arr2[j]);
    }

        for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-1-i; j++) {
            if(arr1[j] > arr1[j+1]) {
                int temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
        }
    }

          for(int i = 0; i < m; i++) {
        for(int j = 0; j < m-1-i; j++) {
            if(arr2[j] > arr2[j+1]) {
                int temp = arr2[j];
                arr2[j] = arr2[j+1];
                arr2[j+1] = temp;
            }
        }
    }
    int arr3[100];
    for(i= 0; i < n; i++) {
        arr3[x++] = arr1[i];
    }    
        for(j = 0; j < m; j++) {
             flag = 0;
                if(arr1[i] == arr2[j]) {
                    flag = 1;
                    break;
                }
        if(flag == 0) {
            arr3[x++] = arr2[j];
        }
    }
        printf("The merged array is : ");
        for(int k = 0; k < x; k++) {
            printf("%d ",arr3[k]);
        }
        printf("\n");
        return 0;
}
