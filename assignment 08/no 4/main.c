#include<stdio.h>
struct employee{
    int code;
    char name[50];
    int jdy;
}e[3];
int main()
{
    int i, y, year;
    for(i=0;i<3;i++)
    {
        printf("Enter The %d Employee's Name: ", i+1);
        gets(e[i].name);
        printf("Enter The %d Employee's Code: ", i+1);
        scanf("%d", &e[i].code);
        printf("Enter The %d Employee's Joining Year: ", i+1);
        scanf("%d", &e[i].jdy);
        fflush(stdin);
    }
    printf("Enter The Current Year: ");
    scanf("%d", &y);
    for(i=0;i<3;i++)
    {
        year=y-e[i].jdy;
        if(year>=3)
        {
            printf("%d.", i+1);
            puts(e[i].name);
            printf("\n");
        }
        fflush(stdin);
    }
}
