#include<stdio.h>
divisible();
main()
{
	divisible();
}
divisible()
{ 
	int a;
	printf("enter any number : ");
	scanf("%d",&a);
	if(a%5==0 && a%3==0)
	{
		printf("enter number is divisible 5 and 3 :");
	}
	else
	{
		printf("enter number is not divisible 5 and 3 :");
	}
}

