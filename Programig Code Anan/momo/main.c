#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{
    char c;
        printf("Enter any Letter \n");
        scanf("%c",&c);
        c = c+2;
        if(c<100){
            printf("Error Found");
        }
        else{

        printf("The Letter is %c = %d",c,c);
        }
    return 0;
}
