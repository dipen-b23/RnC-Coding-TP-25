/*Find Triplet with Given Sum: Write a program to find three elements in an array that
add up to a given sum. */


#include<stdio.h>
void main(){
    printf("Enter size of array");
    int n;
    scanf("%d",&n);
    int a[n]; int c=0;
    printf("Enter %d values in array:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter desired sum");
    int s;
    scanf("%d",&s);
    
    printf("Triplets with sum %d: ",s);
    for(int i=0;i<n-2;i++){
        
        for(int j=i+1;j<n-1;j++){
            
            for(int k=j+1;k<n;k++){
                int sum=0;
                sum=a[i]+a[j]+a[k];
                if(sum==s){c=1;
                    printf("(%d, %d, %d)\t",a[i],a[j],a[k]);
                       
                    }

            }
            

        }
        
    }
    if(c==0) printf("No triplet for the given sum in the array");
}