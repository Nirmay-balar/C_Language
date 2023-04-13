#include<stdio.h>
main()
{
	int r,c,i,j,sum=0;
	printf("enter the size of r:");
	scanf("%d",&r);
	printf("enter the size of c:");
	scanf("%d",&c);
	int a[i][j];
	printf("enter the element of 2d array:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		  if(i==j)
		  {
		  	 	printf("%d",a[i][j]);
		  	 	sum+=a[i][j];
		  }
		  else
		  {
		  	printf("-");
		  }
			
		}
		printf("\n");
       
	}
	printf("%d",sum);
}
