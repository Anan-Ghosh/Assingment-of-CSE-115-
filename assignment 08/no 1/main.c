#include<stdio.h>
struct stu_info{
    char name[50];
    char dep[10];
    char cou[10];
    int year;
    int roll;
}s[50];
void yearp(int a);
void rollg(int b);
int main()
{
    int i, y, r;
    for(i=0;i<50;i++)
    {
        printf("Enter The %d Student's Name: ", i+1);
        gets(s[i].name);
        printf("\nEnter The %d Student's Department: ", i+1);
        gets(s[i].dep);
        printf("\nEnter The %d Student's Course: ", i+1);
        gets(s[i].cou);
        printf("\nEnter The %d Student's Roll: ", i+1);
        scanf("%d", &s[i].roll);
        printf("\nEnter The %d Student's year: ", i+1);
        scanf("%d", &s[i].year);
        printf("\n");
        fflush(stdin);
    }
    printf("\nEnter A Particular Year: ");
    scanf("%d", &y);
    yearp(y);
    printf("\nEnter A Student's Roll: ");
    scanf("%d", &r);
    rollg(r);
    return 0;
}
void yearp(int a)
{
    int j, se=1;
    for(j=0;j<50;j++)
    {
        if(a==s[j].year)
        {
            printf("\n%d. ", se);
            puts(s[j].name);
            se++;
        }
    }
    return;
}
void rollg(int b)
{
    int k;
    for(k=0;k<50;k++)
    {
        if(b==s[k].roll)
        {
            printf("\nThe Student's name: ");
            puts(s[k].name);
            printf("\nThe Student's Department: ");
            puts(s[k].dep);
            printf("\nThe Student's Course: ");
            puts(s[k].cou);
            printf("\nThe Student's Year: %d\n", s[k].year);
        }
    }
    return;
}
