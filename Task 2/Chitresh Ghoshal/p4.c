/*Define a structure Book with members title, author, and price. Write a program to sort an
 array of books in ascending order of price.*/

 #include<stdio.h>
 #include<string.h>
 struct book{
    char name[50];
    char author[50];
    float price;
 };

 void sort(struct book b[],int n){
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(b[j].price > b[j+1].price) {
                struct book temp = b[j+1];
                b[j+1] = b[j];
                b[j] = temp;
            }
        }
    }
 }

 void main(){
    int n;
    printf("Enter number of books");
    scanf("%d",&n);
    getchar();
    struct book b[n];

    for(int i=0;i<n;i++){
        printf("Enter name, author and price of book %d\n", i+1);
        gets(b[i].name);
        gets(b[i].author);
        scanf("%f",&b[i].price);
        getchar();
    }
        sort(b,n);
         printf("\nBooks sorted in ascending order of price:\n");
    for(int i=0; i<n; i++) {
        printf("Title: %s, Author: %s, Price: %.2f\n",
               b[i].name, b[i].author, b[i].price);
    }
    }


 
 