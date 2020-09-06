#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[20], *pt;
    int count =0;
    printf("\nEnter any string:\n");
    gets(str);
    pt=str;
    while(*pt!='\0')

    {
        count++;
        pt++;


    }

    printf("\nLength of the string: %d", count);



}

