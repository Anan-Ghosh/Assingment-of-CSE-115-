#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char pass1[50];
    char pass2[50];
    char Question[10000];

    int x,y,i,z;
     printf("\t\t\t\t\t\tWelcome\n\n\n\t");
     FILE *fr,*fw;

    printf("\n\n\nGive your Password: ");
   scanf("%d",&pass1);


    printf("what do you want?\n\n");
    printf("1.Encrypt\n\n");
    printf("2.Decrypt\n\n");

    printf("\n\nEnter you choice: ");
    scanf("%d",&x);

    switch(x)
    {


    case 1:

   printf("\n\nEnter your Question\n\t");
   scanf("%s",&Question);


   printf("\n\nDo you want to Encrypt the Question\n\n\t");
   printf("\n\n1.YES\n\t");
   printf("\n\n2.NO\n\t");

   printf("\n\nEnter you choice: ");
   scanf("%d",&y);

    switch(y)
    {
    case 1:
        for(i=0;Question[i]!='\0';i++)
        {
            Question[i]=Question[i]+3;
        }
       Question[i]='\0';
        printf("\n\n The Question is successfully Encrypted\n\n\t");

    fw=fopen("input.txt","w");
    fprintf(fw,"%s",&Question);
    fclose(fw);
    break;

    case 2:
        break;


    //default:
       // printf("Error");
        //break;
    }

    break;


    case 2:



    printf("\t\t\t\t Welcome User\n\n");

    printf("\n\n\nGive your Password: ");
    scanf("%s",&pass2);



         printf("Do you want to Decrypt the Question\n\n\n");
         printf("\n\n1.Yes\n\n");
         printf("\n\n2.No\n\n");

         printf("Enter your choice: ");
         scanf("%d",&z);


    switch(z)
    {
    case 1:
        for(i=0;Question[i]!='\0';i++)
        {
            Question[i]=Question[i]-3;
        }
        printf("\n\n The Question is successfully Decrypted\n\n\t");

       fr=fopen("output.txt","w");
    fprintf(fr,"%s",&Question);
    fclose(fr);
        break;

    case 2:
        break;


    //default:
        //printf("Error");
        //break;

    }



    default:
        printf("Error");
        break;



    }






    return 0;
}
