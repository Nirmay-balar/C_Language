#include<stdio.h>

main()
{
	int i;
	char pass[6];
	printf("enter your password :");
   for(i=0;i<=6;i++)
	{
			scanf("%c",&pass[i]);
	}
	for(i=0;i<=6;i++)
	{
		if(pass[i]>=97 && pass[i]<=122)
		{
			pass[i]=pass[i]-32;
			printf("%c",pass[i]);
		}
	}
}
