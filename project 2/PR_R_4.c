#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter the value a:");
	scanf("%d",&a);
	printf("enter the value b:");
	scanf("%d",&b);
	printf("enter the value c:");
	scanf("%d",&c);
	printf("enter the value d:");
	scanf("%d",&d);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("a is maximum...");
			}
			else
			{
				if(d>b)
				{
					if(d>c)
					{
						printf("d is maximum...");
					}
					else
					{
						if(c>b)
						{
							printf("c is maximum...");
						}
						else
						{
							printf("c is maximum...");
						}
					}
				}
				else
				{
					if(b>c)
					{
						printf("b is maximum...");
					}
					else
					{
						printf("c is maximum...");
					}
				}
			}
		}
		else
		{
			if(c>b)
			{
				if(c>d)
				{
					printf("c is maximum...");
				}
				else
				{
					if(d>b)
					{
						printf("d is maximum...");
					}
					else
					{
						printf("d is maximum...");
					}
				}
			}
			else
			{
				printf("b is maximum...");
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("b is maximum...");
			}
			else
			{
				printf("d is maximum...");
			}
		}
		else
		{
			printf("c is maximum...");
		}
	}
	getch();
	
}
