#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create();
void traverse();
void search();
int no[5],i,ch;
void main()
{
	clrscr();
	while(1)
	{
		printf("\n operations are ");
		printf("\n 1. create");
		printf("\n 2. traverse");
		printf("\n 3. search");
		printf("\n 4. exit");
		printf("\n enter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:create();
				break;
			case 2:traverse();
				break;
			case 3:search();
				break;
			case 4:exit(0);
			default:printf("\n invalic choice \n");
				break;
		}
	}
}
void create()
{
	printf("\n enter 5 elements : ");
	for(i=0;i<=4;i++)
	{
		scanf("%d",no[i]);
	}
}
void traverse()
{
	printf("\n display 5 elements :");
	for(i=0;i<=4;i++)
	{
		printf("\n no[%d] is %d at %u memory address",i,no[i],&no[i]);
	}
}
void search()
{
	int key , flag=0;
	printf("\n enter key element for your search :");
	scanf("%d",&key);

	for(i=0;i<=4;i++)
	{
		if(key==no[i])
		{
			printf("\n key is not found at %d position|n",i+1);
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("\n key element not found ");
	}
}