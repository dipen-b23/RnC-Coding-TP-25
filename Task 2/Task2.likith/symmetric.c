#include<stdio.h>
int main(){
int arr1[3][3],symmetric=1;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("enter");
        scanf("%d",&arr1[i][j]);
    }

}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(arr1[i][j]!=arr1[j][i]){
            symmetric=0;
        }
    }

}
if(symmetric==1){
    printf("symmetric");
}
else{
    printf("not symmetric");
}
    return 0;
}