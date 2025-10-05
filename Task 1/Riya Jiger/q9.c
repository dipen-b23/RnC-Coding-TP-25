/*
9. Check Symmetric Matrix: Implement a C program to check if a given matrix is  
symmetric (i.e., matrix is equal to its transpose).  
Sample Input: Enter the number of rows and columns: 3 3  
Enter the matrix elements:   
1 2 3   
2 4 5   
3 5 6  
Output: The matrix is Symmetric.
*/
#include <stdio.h>

int main() {
    int rows, colunms;
    int issymmetric = 1;

    
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &colunms);

    
    if (rows != colunms) {
        printf("The matrix is not square so it cannot be symmetric.\n");
        return 0; 
    }

     int matrix[rows][colunms];
      printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colunms; j++) {
            scanf("%d", &matrix[i][j]);
            
        }
        
    }
  
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colunms; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                issymmetric = 0; // Set the flag to false
                break;          // Exit the inner loop
            }
        }
        if (issymmetric == 0) {
            break; // Exit the outer loop
        }
    }

   
    if (issymmetric == 1) {
        printf("The matrix is Symmetric.\n");
    } else {
        printf("The matrix is not Symmetric.\n");
    }

    return 0;
}
