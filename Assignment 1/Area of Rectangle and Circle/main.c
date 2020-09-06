#include <stdio.h>
#include <stdlib.h>
#define Pi 3.1416
int main()
{
    int x,y,perimeter,area1;
    float r,area2,circumference;

    printf("Enter the value of x,y:");
    scanf("%d\n,%d",&x,&y);

    area1=x*y;
    printf("The area of rectangle is %d\n",area1);

    perimeter=2*(x+y);
    printf("The perimeter of rectangle is %d\n",perimeter);

    printf("Enter the value of r:");
    scanf("%f",&r);

    area2=(Pi*(r*r));
    printf("The area of circle is %f\n",area2);

    circumference=2*Pi*r;
    printf("The circumference is %f",circumference);

    return 0;
}
