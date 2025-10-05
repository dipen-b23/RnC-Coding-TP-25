#include <stdio.h>


int main() {
    int low, up, num, d, flag;
    printf("Enter lower limit: ");
    scanf("%d", &low);
    printf("Enter upper limit: ");
    scanf("%d", &up);
    num = low;
    printf("The prime numbers between %d and %d are:\n ", low,up);
    while (num <= up) {
        flag = 1;
        if (num < 2) {
            flag = 0;
        } else {
            for (d = 2; d <= num / 2; d++) {
                if (num % d == 0) {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1) {
            printf("%d\n ", num);
        }
        num++;
    }
   
    return 0;
}

