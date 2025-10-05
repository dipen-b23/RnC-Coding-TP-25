#include<stdio.h>
#include<math.h>
int main() {
    int num,n,result = 0,placevalue = 1;
    printf("Enter the number : ");
    scanf("%d",&num);
    int temp = num;
    while(num != 0) {
        n = temp % 10;
        temp = temp / 10;
        if(n == 0) {
            n = 1;
        }
        result = result + n*placevalue;
        placevalue *= 10;
        num /= 10;
    }
    printf("Converted number : %d",result);
    return 0;
}