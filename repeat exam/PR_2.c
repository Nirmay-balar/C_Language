#include<stdio.h>

void main()
{
	int r,c,i,j,cube;

	printf("enter the size of row :");
	scanf("%d",&r);
	
	printf("enter the size of column :");
	scanf("%d",&c);
	
	int a[r][c];
		printf("enter the element :");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
		
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n\n----------------------\n\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
		   printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n----------------------\n\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			cube=a[i][j] * a[i][j] * a[i][j];
			printf("%d ",cube);
		}
	}
	
}
