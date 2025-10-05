/*Implement a program that accepts a 2D array (e.g., a matrix of grades for students, 
number of rows = number of students) and calculates the average grade for each student 
using a function. Pass the 2D array to the function, and handle different sizes using arguments.*/

#include<stdio.h>

void average(int m,int n,int a[m][n],float avg[])
{
    for(int i=0;i<m;i++)
    {
        float s=0;
        for(int j=0;j<n;j++)
        s=s+a[i][j];
        avg[i]=(float) s/n;
    }
}

int main()
{
    int m,n;
    printf("Enter no. of students and subjects");
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        printf("Enter marks of student %d\n", i+1);
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    float avg[m];
    average(m,n,a,avg);
    for(int i=0;i<m;i++)
    printf("Average marks of student %d is: %f\n",i+1,avg[i]);

}