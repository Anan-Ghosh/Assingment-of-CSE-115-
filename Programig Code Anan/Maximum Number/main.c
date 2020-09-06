#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    printf("The value of:");
    scanf("%d%d%d",&a,&b,&c);

    if((a>b)&&(a>c))
    printf("The Maximum Number is %d\n,a");

    if((b>a)&&(b>c))
        printf("The Maximum Number is %d\n,b");

    else
        printf("The Maximum Number is %d\n,c");
    return 0;
}
