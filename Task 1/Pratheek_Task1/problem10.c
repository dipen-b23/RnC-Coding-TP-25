#include <stdio.h>
int main() {
    int num, temp, rem, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        rem = temp % 10;          
        sum += rem * rem * rem;    
        temp = temp / 10;          
    }
    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}
