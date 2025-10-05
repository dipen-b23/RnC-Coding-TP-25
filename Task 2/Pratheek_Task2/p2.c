#include<stdio.h>
int main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    int arr[n][2];
    for(int i=0;i<n;i++){
        arr[i][0]=i+1;
        printf("Enter grade of Student %d (out of 10): ", i+1);
        fgets(arr[i][1], sizeof(arr[i][1]), stdin);
    }
    for(int i=0;i<n;i++){
       for(int j=0;j<2;j++){
           printf("%d", arr[i][j]);
       }
    }
    return 0;
}