#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10],i,num;

    for(i=0;i<10;i++)
    {
        printf("%dth element:  ",i+1);
        scanf("%d",&arr[i]);

    }
    printf("\n\n\n");

    printf("Enter the number:");
    scanf("%d",&num);


    for(i=0;i<10;i++)
    {
        if(arr[i]==num){
            printf("%dth element is the number",i+1);
        }
    }
    printf("\n\n");








    return 0;
}
