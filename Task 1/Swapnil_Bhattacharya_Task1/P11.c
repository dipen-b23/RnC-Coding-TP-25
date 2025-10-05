#include<stdio.h>
void main(){
    printf("Enter dimension of 1D");
    int n;
    scanf("%d",&n);

    int a[n];
    printf("Enter %d elements for array:",n);
    for(int i=0;i<n;i++)
    scanf("%d",& a[i]);

    printf("Initial array");
    for(int i=0;i<n;i++)
    printf("%d\t", a[i]);

    printf("\n");

    printf("Enter no. of positions to be shifted by");
    int k;
    scanf("%d",&k);

    printf("Press 1. for left shifting and 2. for right shifting");
    int choice;
    scanf("%d",&choice);
    int fl=0;

    switch(choice)
    {
    case 1:
    for(int j=1;j<=k;j++)
    {
     int t=a[0];
    for(int i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=t;
    }   
    break;


       
    case 2:for(int j=1;j<=k;j++)
    {
    int t=a[n-1];
    for(int i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=t;
    }

    break;
    default: printf("Wrong option chosen");fl=1;
    }
    if(fl!=1)
    {
    for(int i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n");
    }
}