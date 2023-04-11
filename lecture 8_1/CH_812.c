#include<stdio.h>

main()
{
	int a[5];
	int i,c=0;
	for(i=0;i<5;i++)
	{
		printf("enter element :");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d",&a[i]);
    c++;
	}
	printf("the length of array:%d",c);
}
