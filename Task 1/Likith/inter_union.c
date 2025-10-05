#include <stdio.h>

int main() {
    int n1, n2;

   
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr1[n1], arr2[n2], unionArr[n1 + n2], interArr[n1 < n2 ? n1 : n2];
    int i, j, k = 0, m = 0;

    
    printf("Enter %d elements for first array: ", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d elements for second array: ", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

   
    printf("\nFirst array: ");
    for (i = 0; i < n1; i++) printf("%d ", arr1[i]);
    printf("\nSecond array: ");
    for (i = 0; i < n2; i++) printf("%d ", arr2[i]);
    printf("\n");

    
    for (i = 0; i < n1; i++) {
        unionArr[k++] = arr1[i];
    }
    for (i = 0; i < n2; i++) {
        int found = 0;
        for (j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            unionArr[k++] = arr2[i];
        }
    }

   
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                int duplicate = 0;
                for (int x = 0; x < m; x++) {
                    if (interArr[x] == arr1[i]) {
                        duplicate = 1;
                        break;
                    }
                }
                if (!duplicate) {
                    interArr[m++] = arr1[i];
                }
            }
        }
    }

   
    printf("\nUnion of arrays (%d elements): ", k);
    for (i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }

    
    printf("\nIntersection of arrays (%d elements): ", m);
    if (m == 0) {
        printf("None");
    } else {
        for (i = 0; i < m; i++) {
            printf("%d ", interArr[i]);
        }
    }
    printf("\n");

    return 0;
}
