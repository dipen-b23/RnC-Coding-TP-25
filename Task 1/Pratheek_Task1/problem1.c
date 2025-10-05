#include<stdio.h>
int main(){
    int b,a;
    printf("Enter A and B: ");
    scanf("%d%d", &a, &b);//a=3 b=7
    b=b+a; //a=3 b=10
    a=b-a;//a=7 b=10
    b=b-a;//a=7 b=3
    printf("After swapping A and B are: %d %d", a,b);
    return 0;
}