/*Write a program to display the following pattern.
         *
       * *
     * * *
   * * * *
 * * * * *       */

#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int k=5; k>=i;k--)
        {
           printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
           printf("*");
        }

        printf("\n");
    }
}