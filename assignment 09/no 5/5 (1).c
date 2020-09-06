#include<stdio.h>
#include<stdlib.h>

int main()

{

    char str[100];
    char *ptr;
    int vowels=0,consonant=0;

    printf("\nEnEter a string:\n");

    gets(str);

    ptr=str;


    while(*ptr!='\0')
    {

        if(*ptr=='A' || *ptr=='a' || *ptr=='E' || *ptr=='e' || *ptr=='i' || *ptr=='I' || *ptr=='O' || *ptr=='o' || *ptr=='U' || *ptr=='u')

        vowels++;
        else
        consonant++;
        *ptr++;


    }

    printf("\nTotal number of vowels: %d",vowels);
    printf("\nTotal number of consonant: %d",consonant);




}
