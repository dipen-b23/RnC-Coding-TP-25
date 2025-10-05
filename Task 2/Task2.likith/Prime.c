#include<stdio.h>
int main(){
int l1=10;
int l2=30;
for(int i=10;i<=l2;i++){
    int count=0;
    for(int j=2;j<=i;j++){
        if(i%j==0){
            count+=1;
        }
    }
    if(count==1){
        printf("%d\n",i);
    }
}
    return 0;

}