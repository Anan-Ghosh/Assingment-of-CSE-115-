#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b, int *c);

int main()
{

    int a, b, c,x,y, temp;
    printf("\nEnter three elements:\n");
    scanf("%d %d %d",&a,&b,&c);
    swap(&a,&b,&c);

    printf("Enter two elements");
    scanf("%d %d",&x,&y);
    add(&x,&y);


}
void swap(int *a, int *b, int *c)
{
    int temp;
    temp=*b;
    *b=*a;
    *a=*c;
    *c=temp;
    printf("Values after swapping numbers in cycle:\n");
    printf("a=%d\nb=%d\nc=%d\n",*a,*b,*c);



}


int add(int x,int y)
{
    int sum;
    sum=x+y;
    printf("The sum is %d",&sum);


}

