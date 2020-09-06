#include<stdio.h>
#include<conio.h>

int main()
{

    int n,i,arr[20];
    int *ptr;

    ptr = &arr[0];

    printf("\nEnter the no of elements you want:");
    scanf("%d",&n);


    printf("\nenter %d elements into array:\n",n);
    for(i=0;i<n;i++)
    {

        printf("Araay[%d]:",i+1);
        scanf("%d",ptr);
        ptr++;

    }
    ptr=&arr[n-1];



    for(i=n-1;i>=0;i--)
    {
        printf("Element %d is %d\n",i+1,*ptr);
        ptr--;


    }




}
