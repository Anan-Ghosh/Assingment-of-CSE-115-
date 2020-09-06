#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[15],i;

    for(i=0;i<15;i++)
    {
        printf("Enter %dth element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n\n");
    for(i=0;i<15;i++)
        {
            if(arr[i]>0){
                printf("%dth is positive number\n",i+1);
            }
            else{
                printf("%dth is negative number\n",i+1);
            }
        }
        printf("\n\n");
        for(i=0;i<15;i++)
        {
            if(arr[i]%2!=0){
                printf("%dth is a Odd number\n",i+1);
            }
            else{
                printf("%dth is a Even number\n",i+1);
            }

        }
         printf("\n\n");
    return 0;


}
