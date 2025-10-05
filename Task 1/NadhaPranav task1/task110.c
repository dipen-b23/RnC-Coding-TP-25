#include<stdio.h>
int main() {
    int original,num,temp = 0,i;
    printf("Enter the number : ");
    scanf("%d",&num);
    original = num;
    while(num != 0) {
        i = num % 10;
        temp += i*i*i;
        num = num / 10;
    }
    if(temp == original) {
        printf("It's an Armstrong number.");
    }
    else {
        printf("It's not an Armstrong number.");
    }
    return 0;
}
