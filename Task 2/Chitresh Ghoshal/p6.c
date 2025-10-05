/*	Find the Largest Element in Array using  a recursive function.*/

#include<stdio.h>
int largest(int a[],int n,int lar){
    if(n<0) return lar;
if(a[n]>lar)
lar=a[n];
 largest(a,n-1,lar);
}

void main(){
    printf("Enter size of array\n");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers",n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int large=largest(a,n-1,a[0]);
    printf("Largest element is: %d",large);
}