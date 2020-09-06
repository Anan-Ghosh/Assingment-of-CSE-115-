#include <stdio.h>
#include <stdlib.h>

int main()
{
   float num1,num2,new_num;
   char opearation;


    printf("Enter your opearation (+,-,*,/): ");
    scanf("%c",&opearation);

    printf("Enter the two number: \n");
    scanf("%f %f",&num1,&num2);

   switch(opearation)
   {
   case '+':
    {
     new_num=num1+num2;
     printf("The sum is %f",new_num);
     break;
    }
    case '-':
    {
     new_num=num1-num2;
     printf("The sum is %f",new_num);
     break;
    }
   case '*':
    {
     new_num=num1*num2;
     printf("The sum is %f",new_num);
     break;
    }
   case '/':
    {
     new_num=num1/num2;
     printf("The sum is %f",new_num);
     break;
    }
   default:
    printf("It is not valid");
   }

}
