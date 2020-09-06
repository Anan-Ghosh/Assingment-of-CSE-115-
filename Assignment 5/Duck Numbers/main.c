#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[99],i;
    printf("ENTER YOUR NUMBER:\n");
    for(i=10;i<99;i++)
    {
        scanf("%d \n",&arr[i]);
    }

}
int checkduck(int dkno )
{
    int dno;
    dno=dkno;
    while(dkno>0)
        {
            if(dkno % 10 == 0)
            {
            return 1;
            break;
            }
			dkno/=10;
        }
            if(dno>0 && flg==1)
            {
             printf(" The given number is a Duck Number.\n");
           dno=dkno;
    while(dkno>0)
        {
            if(dkno % 10 == 0)
            {
            return 0;
            break;
            }
			dkno/=10;
        }
            if(dno>0 && flg==1)
            {
             printf(" The given number is a Duck Number.\n");
            }
            else
            {
             printf(" The given number is not a Duck Number.\n");
            }  }
            else
            {
             printf(" The given number is not a Duck Number.\n");
            }
}
