#include <stdio.h>
#include <stdlib.h>

int main()
{

  int a,b,c,d,e,f,g,temp;
  printf("Enter the Four digits number a:");
  scanf("%d",&a);

  printf("Enter the value of b:");
  scanf("%d",&b);

  temp=b;
  scanf("%d",&temp);

  c=(a/b);

  d=(a%b);
  e=(d/b);

  f=(d%b);

  g=c+e+f;

  printf("The result is %d",g);

  return 0;


    return 0;
}
