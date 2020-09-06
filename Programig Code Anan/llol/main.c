#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int a,b,d;
    char c;

    printf("Enter the numbers :\n");
    scanf("%d %d",&a,&b);
    d = a+b;
    printf("The sum of the numbers : %d\n",d);

    if(d<=126){

    printf("The aschi value of the number is :%c",d);
    }
    else{
        printf("NO aschi value");
    }

    return 0;
}
