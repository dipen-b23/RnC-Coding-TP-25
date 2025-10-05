#include <stdio.h>
int main()
{
    int num,i,low,up,flag;
    printf("Enter the Lower Limit : ",low);
    scanf("%d",&low);
    printf("Enter the Upper Limit : ",up);
    scanf("%d",&up);
    num = low;
    printf("Prime Numbers between %d and %d are :\n",low,up);
    while(num < up)
    {
        if(num > 1)
        {
            flag = 1;
            i = 2;
            while(i <= num/2)
            {
                if(num % i == 0)
                {
                    flag = 0;
                    break;
                }
                i++;
            }
            if(flag == 1)
            {
                printf("%d ",num);
            }
        }
        num++;
    }
    printf("\n");
    return 0;
}