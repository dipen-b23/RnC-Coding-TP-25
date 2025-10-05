#include<stdio.h>
int main(){
    int arr[6]={1,6,2,3,4,5};
    int sum=6;
    for(int i=0;i<6-2;i++){
        for(int j=i+1;j<6-1;j++){
            
            for(int k=j+1;k<6;k++){
                int target=arr[i]+arr[j]+arr[k];
                if(target==sum){
                    printf("%d %d %d\n",arr[i],arr[j],arr[k]);
                }
            }


        }
    }






    return 0;
}