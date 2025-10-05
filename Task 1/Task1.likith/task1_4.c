#include <stdio.h>

int main() {
    int n1, n2;

  
    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);

    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);

    int a[n1], b[n2], merged[n1 + n2];

    
    printf("Enter %d sorted elements for first array: ", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter %d sorted elements for second array: ", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

   
    while (i < n1) {
        merged[k++] = a[i++];
    }

   
    while (j < n2) {
        merged[k++] = b[j++];
    }


    printf("\nMerged Sorted Array (%d elements): ", n1 + n2);
    for (int x = 0; x < n1 + n2; x++) {
        printf("%d ", merged[x]);
    }
    printf("\n");

    return 0;
}
