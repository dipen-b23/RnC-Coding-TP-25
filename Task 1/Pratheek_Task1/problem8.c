#include<stdio.h>
int main(){
    int n1,n2;
   printf("Enter the number of elements for 1st array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elements: ");
    for(int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elements for 2nd array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter the elements: ");
    for(int j = 0; j < n2; j++) {
        scanf("%d", &arr2[j]);
    }
  for(int k=0;k<=n1;k++){
      printf("%d ",arr1[k]);
    }
  for(int l=0;l<=n2;l++){
    printf("%d ",arr2[l]);
    }

}