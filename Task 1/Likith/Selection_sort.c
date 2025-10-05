#include<stdio.h>
int main(){
int n=5;
int arr[5]={2,4,5,1,7};
for(int i=0;i<n-1;i++){
    int small=i;
   for(int j=i+1;j<n;j++){
    if(arr[i]>arr[j]){
        small=j;
    }
   }
   int temp=arr[i];
   arr[i]=arr[small];
   arr[small]=temp;
   

}
for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
}

    return 0;
}