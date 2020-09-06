#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,value=1;

    printf("Enter n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)

        value=value*i;
        printf("The value is %d",value);

    return 0;
}
