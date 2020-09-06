#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C,D,A;
    printf("Enter the value of C,D:");
    scanf("%d,%d",&C,&D);

    A=C+D;

    printf("Show the result is %d\n",A);

    C=A-C;
    printf("Show the value of C is %d\n",C);

    D=A-D;
    printf("Show the value of D is %d",D);

    return 0;
}
