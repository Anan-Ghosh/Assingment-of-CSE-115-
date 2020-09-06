#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,sum;
    int *ptr1,*ptr2;

    printf("Enter Value of x and y:");
    scanf("%d %d",&x,&y);

    ptr1=&x;
    ptr2=&y;


    sum=*ptr1+*ptr2;

    printf("the sum is %d",sum);











    return 0;
}
