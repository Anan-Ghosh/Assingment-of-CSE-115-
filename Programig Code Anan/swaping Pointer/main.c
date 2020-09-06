#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y,temp;
   int *ptr;


   printf("Enter the value of x and y:");
   scanf("%d %d",&x,&y);

   temp=x;
   ptr=&temp;
   x=y;
   y=ptr;

   printf("The value of x=%d\n",x);
   printf("The value of y=%d",*ptr);







    return 0;
}
