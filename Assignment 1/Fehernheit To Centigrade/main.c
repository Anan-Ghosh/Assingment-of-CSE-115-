#include <stdio.h>
#include <stdlib.h>

main()
{
float C,F;
printf("Enter the value of Fahernheit:");
scanf("%f",&F);
C=(((F-32)/9)*5);
printf("The value of Centigrade is % .2f\n",C);
return 0;
}
