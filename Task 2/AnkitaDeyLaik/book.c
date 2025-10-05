/*
Define a structure Book with members title, author, and price. 
Write a program to sort an array of books in ascending order of price.
*/
#include <stdio.h>
struct Book 
    {
        char title[100];
        char author[100];
        float price;
    };

void sort(int n, struct Book b[n]) 
    {
        for (int i = 0; i < n - 1; i++) 
            {
                for (int j = i + 1; j < n; j++) 
                {
                    if (b[i].price > b[j].price) 
                    {
                        struct Book temp = b[i];
                        b[i] = b[j];
                        b[j] = temp;
                    }
                }
            }
    }

int main() 
    {
    int n;
    printf("Enter number of books \n");
    scanf("%d", &n);
    struct Book b[n];
    for (int i = 0; i < n; i++) 
    {
        printf("Book title? \n");
        scanf(" %[^\n]", b[i].title);
        printf("Author's name? \n");
        scanf(" %[^\n]", b[i].author);
        printf("Book price? \n");
        scanf("%f", &b[i].price);
    }
    sort(n, b);
    for (int i = 0; i < n; i++) 
    {
        printf("%s \n %s \n RS. %.2f\n", b[i].title, b[i].author, b[i].price);
    }
    return 0;
}
