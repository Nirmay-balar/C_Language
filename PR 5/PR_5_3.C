#include<stdio.h>

main()
{
	int i,a[i],b[i],c[i],n;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements of first array:");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("first array.....");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		c[i]=a[i];
	}
	printf("\nenter the elements of second array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("second array....");
	for(i=0;i<n;i++)
	{
		printf("%d",b[i]);
		c[n*2]=b[i];
	}
	printf("\nthe third array is: %d",c[i]);
}
