#include<stdio.h>

main()
{

    int i,t ,x,z;
    printf("The Armstrong Number Are :\n");

    for (i=1;i<=500;i++){

        z=0;
        x=i;
        while(x!=0){

            t=x%10;
            z=z+t*t*t;
            x=x/10;
        }
        if(z==i)
            printf("%d\n",i);

    }

    return 0;
}
