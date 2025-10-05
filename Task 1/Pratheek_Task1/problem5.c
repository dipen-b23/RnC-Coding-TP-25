#include<stdio.h>
int main(){
    int num,sum;
     printf("Enter the number of rows: ");
     scanf("%d", &num);
     for(int i=1;i<=num;i++){
         for(int j=1;j<=num-i;j++){
             printf(" ");
         }
         for(int k=1;k<=i;k++){
             printf("*");}
         printf("\n");
     }
     return 0;
     
}