#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],b[5],i,j;


    for(i=0;i<5;i++)
    {
        printf("Enter %dth element: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n\n\n");

    for(i=0,j=4;i<5;i++,j--)
    {
        b[i]=a[j];
    }
    printf("\n\n\n");

    for(i=0;i<5;i++)
    {
        printf("%d",b[i]);
    }

    return 0;
}
