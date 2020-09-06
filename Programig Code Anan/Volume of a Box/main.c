#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hiegth,width,length,volume;
    printf("Enter the value of hiegth,width,length");
    scanf("%f,%f,%f",&hiegth,&width,&length);

    volume=hiegth*width*length;
    printf("The Volume is %.2f",volume);
    return 0;
}
