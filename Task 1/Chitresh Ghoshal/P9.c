/*Check Symmetric Matrix: Implement a C program to check if a given matrix is
symmetric (i.e., matrix is equal to its transpose).*/

#include<stdio.h>
int main(){
    printf("Enter size of n*n matrix");
    int n;
    scanf("%d",&n);
    int a[n][n]; int fl=0;
    printf("Enter %d values in matrix: ", n*n);
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    scanf("%d",&a[i][j]);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]!=a[j][i]){
                printf("Matrix is unsymmetric");
                return 0;
            }
            
        }
        
    }
     printf("Matrix is symmetric");
     return 1;
     
    


}