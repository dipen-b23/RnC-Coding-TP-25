#include<stdio.h>
int main(){
    int n,k,temp;
     printf("Enter the number of elements in array : ");
     scanf("%d", &n);
     int arr[n];
     for(int i=0;i<=n-1;i++){
         printf("Enter Element Number %d: ",i+1);
         scanf("%d", &arr[i]);
     }
     printf("Enter the magnitude of rotation: ");
     scanf("%d", &k);
     for(int q=0;q<k;q++){
          temp=arr[0];
          for(int j=0;j<n-1;j++){
           arr[j]=arr[j+1];
            }
     arr[n-1]=temp;
     }
     for(int p=0;p<=n-1;p++){
         printf("%d ",arr[p]);
     }
     return 0;
     
}