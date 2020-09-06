#include<stdio.h>
#include<stdlib.h>
struct c_info{
    char name[20];
    int age;
    int tm;
    float avg;
};
int comp(const void *a, const void *b)
{
    struct c_info *ia = (struct c_info *)a;
    struct c_info *ib = (struct c_info *)b;
    return (int)(100.f*ia->avg - 100.f*ib->avg);
}
int main()
{
    struct c_info c[20];
    int i;
    for(i=0;i<20;i++)
    {
        printf("Enter %d cricketer's name: ", i+1);
        gets(c[i].name);
        printf("\nEnter %d cricketer's number of test match: ", i+1);
        scanf("%d", &c[i].tm);
        printf("\nEnter %d cricketer's age: ", i+1);
        scanf("%d", &c[i].age);
        printf("\nEnter %d cricketer's average run: ", i+1);
        scanf("%f", &c[i].avg);
        printf("\n");
        fflush(stdin);
    }
    qsort(c, 20, sizeof(struct c_info), comp);
    printf("\nThe Result is: ");
    for(i=0;i<20;i++)
    {
        printf("\n%f", c[i].avg);
    }
}
