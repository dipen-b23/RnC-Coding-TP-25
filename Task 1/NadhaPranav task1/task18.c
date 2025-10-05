#include <stdio.h>
int main() {
    int m,i,n,j,x = 0,flag,y = 0;
    printf("Enter the size of the first array : ");
    scanf("%d",&m);
    int arr1[m];
    printf("Enter the elements : ");
    for(i = 0; i < m; i++) {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of the second array : ");
    scanf("%d",&n);
    int arr2[n];
    printf("Enter the elements : ");
    for(j = 0; j < n; j++) {
        scanf("%d",&arr2[j]);
    }
    int un[100],inter[100];
    for(i = 0; i < m; i++) {
        un[x++] = arr1[i];
    }
    for(j = 0; j < n; j++) {
        flag = 0;
        for(i =0; i < m; i++) {
            if(arr2[j] == arr1[i]) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            un[x++] = arr2[j];
        }
    }
    for(i =0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(arr1[i] == arr2[j]) {
                flag= 0;
                for(int t = 0; t < y; t++) {
                    if(inter[t] == arr1[i]) {
                        flag = 1;
                        break;
                    } 
                }
                if(flag == 0) {
                    inter[y++] = arr1[i];
                }
            }
        }
    }
    printf("Union : ");
    for(i = 0; i < x; i++) {
        printf("%d ",un[i]);
    }
    printf("\t");

    printf("Intersection : ");
    for(i = 0; i < y; i++) {
        printf("%d ",inter[i]);
    }
    printf("\t");
    
    return 0;
}