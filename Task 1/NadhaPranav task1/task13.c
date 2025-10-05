#include<stdio.h>
int main() {
    int a,b,c;
    printf("enter the sides : ");
    scanf("%d %d %d",&a,&b,&c);
    if(c*c == a*a + b*b) {
        printf("The given sides form a right-angled triangle.");
    }
    else {
        printf("The given sides do not form a right-angled triangle.");
    }
    return 0;
}