#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x;
    int *ptr;


    printf("Enter the value:\n ");
    scanf("%d",&x);

    ptr=&x;

    printf("The value of x=%d\n",x);
    printf("The value of ptr=%d\n",*ptr);
    printf("The Address of x=%d\n",&x);
    printf("The Address of ptr=%d",ptr);

   return 0;

}
