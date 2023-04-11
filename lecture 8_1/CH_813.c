#include<stdio.h>

main()
{
	int i,n;
	int a[n],b[n],c[n];
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("enter the element:");
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
	   
		 c[i]=a[i]+b[i];
		 printf("%d:",c[i]);
	}
	printf("\n");

}
