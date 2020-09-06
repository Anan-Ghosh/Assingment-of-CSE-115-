#include <stdio.h>
main()
{
    int r,sp,p,n,no,value=1;

    printf("Enter a number:");
    scanf("%d",&no);
    n=no;
    for(r=1;r<=no;r++)
    {
        for (sp=1;sp<=n;sp++)
        {
            printf(" ");
            n--;
        }
        for(p=1;p<=r;p++)
        {
            printf("%d ",value);
            value++;
        }
        printf("\n");
    }
    getch();
    return 0;
}
