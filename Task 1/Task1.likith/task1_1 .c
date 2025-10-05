#include <stdio.h>

int main() {
    int num, digit, newNum = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

   
    if (num == 0) {
        printf("New number: 1\n");
        return 0;
    }

    while (num > 0) {
        digit = num % 10;          
        if (digit == 0) {
            digit = 1;            
        }
        newNum = (digit * place) + newNum; 
        num /= 10;
        place *= 10;
    }

    printf("Number after replacing 0 with 1: %d\n", newNum);

    return 0;
}
