#include<stdio.h>
int main(){
    int num,sum;
     printf("Enter the number of elements: ");
     scanf("%d", &num);
     printf("Enter the number: ");
     scanf("%d", &sum);
     int arr[num];
   
     for(int i=0;i<=num-1;i++){
         printf("Enter Element Number %d: ",i+1);
         scanf("%d", &arr[i]);
     }
     int count=0;
     for(int i=0;i<=num-1;i++){
        for(int j=i+1;j<=num-1;j++){
          for(int k=j+1;k<=num-1;k++){
            if(arr[i]+arr[j]+arr[k]==sum){
                count++;
                printf("Desired Triplet is (%d,%d,%d)\n", arr[i],arr[j],arr[k]);
            }
            
        }
       }
     }
     printf("Number of pairs is %d", count);
     return 0;

    }
     
