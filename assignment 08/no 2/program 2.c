#include <stdio.h>
#include <conio.h>
#include <string.h>

struct bank
{
	int ac_num,balance;
	char name[50];
}b[3];

int main()
{
	int n,i,choice,bal,acc,ch;

	for(i=0;i<3;i++)
	{

		printf("Customer Account number : ");
		scanf("%d",&b[i].ac_num);
		printf("Customer Name : ");
		scanf("%s",&b[i].name);
		printf("Customer's Current Balance : ");
		scanf("%d",&b[i].balance);

		}


	printf("Hello Thank you for chosing our bank ! \n");
	printf("\nHow Can we help you ? \n");
	printf("1.Customers whoes balance is less than 100 : \n");
	printf("2.Transaction :");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nCustomer with low balance\n\n");
			for(i=0;i<2;i++)
			{
				if(b[i].balance < 100)
				{
					printf("\nAccount Number : %d || Name : %s || Balance : %d",b[i].ac_num,b[i].name,b[i].balance);
		 		}
			}
			printf("\n\n\nPlease deposite soon\n\n");
			break;
		case 2:
			printf("\nWhat would u like to do : \n\n");
			printf("1.Deposite : \n");
			printf("2.Withdraw : \n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					printf("\nDear customer please input your Account Number : ");
					scanf("%d",&acc);
				for(i=0;i<2;i++)
				{
					if(b[i].ac_num==acc)
					{
						printf("Hello : %s !\nEnter amount to be deposite : \n",b[i].name);
						scanf("%d",&bal);
						b[i].balance+=bal;

						printf("\nSuccessfully Deposited in your account \n");
						printf("\nAccount Number     : %d",b[i].ac_num);
						printf("\nName 	             : %s",b[i].name);
						printf("\nUpdated Balance is : %d",b[i].balance);

					}
				}
				break;
			case 2:
				printf("\nDear customer please input your Account Number : ");
				acc=0;
				scanf("%d",&acc);
				for(i=0;i<2;i++)
				{
					if(b[i].ac_num==acc)
					{
						printf("Hello : %s !\nEnter amount to be withdraw: \n",b[i].name);
						scanf("%d",&bal);
						if(bal>b[i].balance)
						{
							printf("\nThe balance is insufficient for the specified withdrawal");
						}
						else
						{
							b[i].balance-=bal;

							printf("\nSuccessfully Withdraw in your account \n");
							printf("\nAccount Number     : %d",b[i].ac_num);
							printf("\nName 	             : %s",b[i].name);
							printf("\nUpdated Balance is : %d",b[i].balance);

                        }
					}
				}
				break;
		}
	}
	return 0;
}
