#include<stdio.h>
int main() {
    int m,n,i,j;
    printf("Enter the number of rows and coloumns : ");
    scanf("%d %d",&n,&m);
    if(n != m) {
        printf("It's not a square matrix so it can't be symmetric.");
    }
    else {
        int arr[n][m];
    printf("Enter the matrix elements : ");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int flag = 0;
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            if(arr[i][j] != arr[j][i])
            flag = 1;
            break;
        }
    }
    if(flag == 0) {
            printf("It's a symmetric matrix.");
        }
        if(flag == 1) {
            printf("It's not a symmetric matrix.");
        }
    }
    return 0;
}