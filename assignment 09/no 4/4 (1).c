#include<stdio.h>
#include<conio.h>

 int main()
 {

    int num,i,fact,*p1,*p2;

    p1=&num;
    p2=&fact;

    printf("\nENter a number:\n");

    scanf("%d",p1);

    fact=1;

    for(i=1;i<=*p1;i++)
    {

        *p2=*p2*i;
    }


    printf("\nFactorial of %d is = %d",*p1,*p2);





 }
