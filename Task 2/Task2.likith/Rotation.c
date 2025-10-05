#include <stdio.h>

int main() {
    int n, k, dir;

   
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], rotated[n];

   
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

   
    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);

   
    k = k % n;

   
    printf("Enter direction (1 for Left, 2 for Right): ");
    scanf("%d", &dir);

   
    for (int i = 0; i < n; i++) {
        if (dir == 1) {
           
            rotated[i] = arr[(i + k) % n];
        } else if (dir == 2) {
           
            rotated[i] = arr[(i - k + n) % n]; 
        } else {
            printf("Invalid direction!\n");
            return 0;
        }
    }

   
    printf("Array after rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");

    return 0;
}
