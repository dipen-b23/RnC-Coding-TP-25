//Find the Largest Element in Array using  a recursive function.


#include <stdio.h>

int n;
void main()
{
  printf("Enter the length of array\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter the array elements\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }

  int x;
  x= largest(a,n,a[0]);
  printf("Largest value: %d",x);
}

int largest(int y[],int z, int large)
{
  if(z<0)
  return large;
  else if(y[n]>large)
  {
    large=y[n];
   return largest(y,z-1,large);
  }
}
