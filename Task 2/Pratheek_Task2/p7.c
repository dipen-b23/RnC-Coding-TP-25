#include <stdio.h>
#include <string.h>

//Function to reverse string
void reverse(int x, char *str, int count) {
    if (x >= count / 2)
        return;
    char temp = str[x];
    str[x] = str[count - x - 1];
    str[count - x - 1] = temp;
    reverse(x + 1, str, count);
}

//Main Function
int main() {
    char str[1000];
    int count = 0;
    puts("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    count = strlen(str); 

    reverse(0, str, count);
    puts(str);

    return 0;
}
