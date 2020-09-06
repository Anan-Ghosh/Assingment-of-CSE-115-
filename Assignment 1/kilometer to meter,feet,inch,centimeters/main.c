#include <stdio.h>
#define KM_PER_METER 1000
#define KM_PER_FEET 3280.84
#define KM_PER_INCH 39370.1
#define KM_PER_CENTIMETERS 100000

int main()
{
    float km,meter,feet,inch,centimeters;

    printf("The value of km:");
    scanf("%f",&km);

    meter=KM_PER_METER*km;
    printf("The Meter is %.2f\n",meter);

    feet=KM_PER_FEET*km;
    printf("The Feet is %.2f\n",feet);

    inch=KM_PER_INCH*km;
    printf("The Inch is %.2f\n",inch);


    centimeters=KM_PER_CENTIMETERS*km;
    printf("The Centimeters is %.2f\n",centimeters);


    return 0;
}
