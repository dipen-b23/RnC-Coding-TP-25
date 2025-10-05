/*
8. Write a C program to find the union and intersection of two integer arrays. 
Sample Input:    
Enter the number of elements in first array: 4  
Enter elements of first array: 1 2 3 4  
Enter the number of elements in second array: 5  
Enter elements of second array: 3 4 5 6 7  
Output:   
Union: 1 2 3 4 5 6 7  
Intersection: 3 4 
*/
#include<stdio.h>
int main()
{
    int n1,n2,j;
    //int k;
    //int common=0;
    
    printf("Enter the number of elements in first array:");
    scanf("%d",&n1);
    int arr1[n1];
    printf("Enter elements of first array:");
    for(int i=0;i<n1;i++)
    {scanf("%d",&arr1[i]);}
    printf("Enter the number of elements in second array:");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter elements of second array:");
    for(int i=0;i<n2;i++)
    {scanf("%d",&arr2[i]);}
    int k = n1 + n2;
    //printf(" k is %d",k);


   printf("union is:");

   int u1[k];
    k=0;
   

    for(int i=0;i<n1;i++)
   {u1[k++]=arr1[i];}
     
   
    

for(int i=0;i<n1+n2;i++)
    {  
        for(j=0;j<n2;j++) 
       {if(u1[i]==arr2[j])
        break;}
    u1[k++]=arr2[j];}

    
        for(int i=0;i<n1+n2;i++)
        {printf("%d\t",u1[i]);}
        

        


    
    return 0;
}