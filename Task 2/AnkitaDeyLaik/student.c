/*
Define a structure Student with fields: roll, name, marks[5]. 
Write a function that takes an array of students (via pointer) 
and calculates the average marks for each student. 
Write another function to determine and display the topper’s name 
and roll number.
*/
#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[80];
    int marks[5];
    double avg;
};

void average(struct Student *s, int n)
{
    int i=0, j=0, sum=0;
    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < 5; j++)
        {
            sum = sum + s[i].marks[j];
        }
        s[i].avg = sum / 5.0;
    }
}

void Topper(struct Student *s, int n)
{
    int i=0, pos = 0;
    double max = s[0].avg;
    for (i = 1; i < n; i++)
    {
        if (s[i].avg > max)
        {
            max = s[i].avg;
            pos = i;
        }
    }

    printf("\nTopper is: %s \n Roll No: %d \n average %f\n", s[pos].name, s[pos].roll, s[pos].avg);
}

int main()
{
    int n, i, j;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    for (i = 0; i < n; i++)
    {
        printf("\nEnter roll number: ");
        scanf("%d", &s[i].roll);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter 5 marks: ");
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &s[i].marks[j]);
        }
    }        
    average(s, n);    
    Topper(s, n);    
    return 0;
}
