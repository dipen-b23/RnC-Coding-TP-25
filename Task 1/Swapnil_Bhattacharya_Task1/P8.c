/*8. Write a C program to find the union and intersection of two integer arrays.
Sample Input:
Enter the number of elements in first array: 4
Enter elements of first array: 1 2 3 4
Enter the number of elements in second array: 5
Enter elements of second array: 3 4 5 6 7
Output:
Union: 1 2 3 4 5 6 7
Intersection: 3 4*/


#include<stdio.h>

int present(int a[],int n, int x){
    for(int i=0;i<n;i++){
        if(a[i]==x) return 1;
    }
    return 0;
}

void main(){
    printf("Enter sizes of two arrays:");
    int m,n;
    scanf("%d%d",&m,&n);
    int a[m],b[n];
    printf("Enter m values for first matrix");
    for(int i=0;i<m;i++)
    scanf("%d",&a[i]);

    printf("Enter n values for second matrix");
    for(int i=0;i<n;i++)
    scanf("%d",&b[i]);

    int in;
    if(m>n)in=m;
    else in=n;
    int uni[m+n],inter[in];
    int x=0,y=0;
    for(int i=0;i<m;i++)
    uni[x++]=a[i];
    int c=x;
    for(int i=0;i<n;i++){
        if(!present(uni,x,b[i]))
        uni[x++]=b[i];
        if(present(a,m,b[i]))
         inter[y++]=b[i];
    }
        
        printf("Union of the arrays is: ");
        for(int i=0;i<x;i++)
        printf("%d\t",uni[i]);
        printf("\n");
        if(y!=0){


        printf("Intersection of the arrays is: ");
        for(int i=0;i<y;i++)
        printf("%d\t",inter[i]);
        printf("\n");}
        else printf("Intersection of the arrays is null");


}
