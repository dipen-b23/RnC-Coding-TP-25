/*
Implement a program that accepts a 2D array 
(e.g., a matrix of grades for students, 
number of rows = number of students) 
and calculates the average grade for 
each student using a function. Pass the 2D array to the 
function, and handle different sizes using arguments.
*/

#include <stdio.h>

char grade(float avg) 
{
    if (avg >= 90) 
    return 'A';
    else if (avg >= 80) 
    return 'B';
    else if (avg >= 70) 
    return 'C';
    else if (avg >= 60) 
    return 'D';
    else return 'F';
}

void average(int m, int n, int arr[m][n]) 
{
    float avg=0.0, sum =0.0;
    for (int i = 0; i < m; i++) {
        sum = 0.0;
        for (int j = 0; j < n; j++) {
            sum += arr[i][j];
        }
            avg = sum/n;
        char gr = grade(avg);
        printf("Student %d: Average = %.2f, Grade = %c\n", i + 1, avg, gr);
    }
}

int main() 
{
    int students, subjects;
    printf("Enter number of students and subjects \n");
    scanf("%d %d", &students, &subjects);
    int marks[students][subjects];
    for (int i = 0; i < students; i++) 
    {
        printf("Enter marks of student %d : \n", i+1);
        for (int j = 0; j < subjects; j++) 
        {
            scanf("%d", &marks[i][j]);
        }
    }
    average(students, subjects, marks);
    return 0;
}
