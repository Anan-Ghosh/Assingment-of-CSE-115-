#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[5];
   int i;

    printf("Enter 5 integer elements for your array:\n");
   for(i = 0; i<5; i++){
        printf("Array[%d]: ",i+1);
        scanf("%d",arr+i);
   }
    printf("Indexing: \t\t Address \t Value(Through *Pointer)\n");
   for(i=0; i<5;i++){
        printf("Array[%d] \t\t %p \t\t %d\n", i+1, &arr[i], *(arr+i));
   }
}
