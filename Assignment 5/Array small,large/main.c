#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5],i;

    for(i=0;i<5;i++)
    {

    printf("Enter the %dth element: ",i+1);
    scanf("%d",&arr[i]);

    }
    printf("\n\n\n");
     int max=arr[0];
     int min=arr[0];
    for(i=0;i<5;i++)
    {
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d is the largest value\n",max);


    for(i=0;i<5;i++)
    {
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("%d is the smallest value",min);

    return 0;
}
