#include <stdio.h>

int max(int n, int x, int arr[], int maxvalue) {
    if (x >= n)
        return maxvalue;
    if (arr[x] > maxvalue)
        maxvalue = arr[x];
    return max(n, x + 1, arr, maxvalue);
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int maxval = max(n, 0, arr, arr[0]);
    printf("Largest element: %d\n", maxval);

    return 0;
}
