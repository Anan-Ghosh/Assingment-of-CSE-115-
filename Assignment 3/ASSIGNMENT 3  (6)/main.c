#include<stdio.h>
main()
{
    int number, i;

    for (number=2;number<=300;number++)
    {
        for (i=2; i<number; i++)
        {
            if (number%i == 0)
            {
                break;
            }
            else
            {
                printf ("\n%d is a prime number", number);
                break;
            }

        }

    }
}
