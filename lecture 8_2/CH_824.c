#include<stdio.h>

main()
{
	int i,j,n;
	int a[n][n],b[n][n],c[n][n];
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter the element:");
		  scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
	   for(j=0;j<n;j++)
	   {
	   	 	printf("enter the element:");
		    scanf("%d",&b[i][j]);
		 }
	}
	for(i=0;i<n;i++)
	{
	   for(j=0;j<n;j++)
	   {
	   	  c[i][j]=a[i][j]+b[i][j];
		    printf("%d:",c[i][j]);
		 }
		
	}
	printf("\n");

}
