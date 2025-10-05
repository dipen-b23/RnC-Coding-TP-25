/*
7. Find Triplet with Given Sum: Write a program to find three elements in an array that  
add up to a given sum.  
Sample Input: Enter the number of elements: 5  
Enter elements: 1 2 3 4 5  
Enter the desired sum: 9  
Output: Triplets with sum 9: (2, 3, 4) 
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {scanf("%d",&arr[i]);}
    int sum;
    printf("Enter the desired sum:");
    scanf("%d",&sum);
    int flag=0;
    
    for(int i=0;i<n-2;i++)
       {
        for(int j=i+1;j<n-1;j++)
            { 
            for(int k=j+1;k<n;k++)
            if(arr[i]+arr[j]+arr[k]==sum)
              {
              
    printf("Triplets with sum %d:%d, %d, %d\n",sum,arr[i],arr[j],arr[k]);
     flag++;
               }
               }       
               }             
   
     
    if(flag==0)
    printf("Such triplet does not exist in the given array");

    return 0;
}