#include <stdio.h>

int main() {
    int choice;

    printf(" Number Conversion Program\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
       
        long long binaryNum;
        int decimalNum = 0, base = 1, digit;

        printf("Enter a binary number: ");
        scanf("%lld", &binaryNum);

        while (binaryNum > 0) {
            digit = binaryNum % 10;       
            decimalNum = decimalNum + digit * base;
            binaryNum = binaryNum / 10;   
            base = base * 2;              
        }

        printf("Converted Decimal number = %d\n", decimalNum);
    }
    else if (choice == 2) {
        // Decimal → Binary
        int decimalNum, binaryNum[32];
        int i = 0;

        printf("Enter a decimal number: ");
        scanf("%d", &decimalNum);

        if (decimalNum == 0) {
            printf("Converted Binary number = 0\n");
            return 0;
        }

        while (decimalNum > 0) {
            binaryNum[i] = decimalNum % 2;   
            decimalNum = decimalNum / 2;
            i++;
        }

        printf("Converted Binary number = ");
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binaryNum[j]);
        }
        printf("\n");
    }
    else {
        printf("Invalid choice! Please run again.\n");
    }

    return 0;
}
