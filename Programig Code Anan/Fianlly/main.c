#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x;
    char str[100];

    printf("\n\n\t PLEASE ENTER ANY OPTION WHAT YOU WANT:\n\n\t");
    printf("\n\n1. ENCRYPET THE STRING:\n\n\t");
    printf("\n\n2. DECRYPET THE STRING:\n\n\t");
    scanf("%d",&x);
    switch(x)
    {
    case 1:

         printf("PLEASE ENTER YOUR QUESTION \t :");
         gets(str);


        for(i=0;(i<100&&str[i]!='\0');i++)
        {
            str[i]=str[i]+3;

        }
        printf("\n\n THE ENCRYPTED QUISTION IS :%s\n\n",str);
        break;


    case 2:
        for(i=0;(i<100 && str[i]!='\0');i++)
        {
            str[i]=str[i]-3;
        }
        printf("\n\n THE DECRYPTED QUESTION IS:%s\n\n",str);
        break;


    default:
        printf("\n\n ERROR\n\n");
    }
    return 0;
}
