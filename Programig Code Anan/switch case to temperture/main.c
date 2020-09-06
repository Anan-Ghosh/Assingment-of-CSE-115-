#include <stdio.h>
#include <stdlib.h>

int main()
{

   int choice;
   float Temp,new_temp;


   printf("1. F to C \n");
   printf("2. C to F \n");


   printf("Enter your Choice: \n");
   scanf("%d",&choice);

   switch(choice)
   {
   case 1:
    {
        printf("Enter your f: \n");
        scanf("%f",&Temp);
        new_temp=(5*(Temp-32)/9);
        printf("The New temp is %f",new_temp);
        break;

    }

    case 2:
    {
        printf("Enter your C: \n");
        scanf("%f",&Temp);
        new_temp=(((9*Temp)/5)+32);
        printf("The New temp is %f",new_temp);
        break;

    }

    default:
        printf("It is not correct value");

   }













    return 0;
}
