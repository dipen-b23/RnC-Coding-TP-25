#include<stdio.h>
#include<math.h>
int main(){
int num=153;
int copy=num;
int copy2=num;

int count=0;
for(int i=1;num>0;i++){
    count+=1;
    num=num/10;
}
int sum=0;
for(int i=1;copy>0;i++){
int rem=copy%10;
sum=sum+pow(rem,count);
copy=copy/10;
}
if (copy2==sum){
    printf("armstrong");
}
else{
    printf("not an arm strong num");
}

    return 0;
}