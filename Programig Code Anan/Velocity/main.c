#include<stdio.h>
float d,v,t;
main()
{
printf("Enter the velocity in meter/seconds:");
scanf("%f",&v);
printf("Enter the time in seconds:");
scanf("%f",&t);
d=v*t;
printf("Distance=%.2f meter",d);
}
