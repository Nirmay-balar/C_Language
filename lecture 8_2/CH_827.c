#include<stdio.h>

main()
{
	int  i,j,r,c;
  printf("enter the size rowes:");
	scanf("%d",&r);
	printf("enter the size columns:");
	scanf("%d",&c);
	int a[i][j];
//	printf("enter the element of 2d array:");
	for(i=0;i<r;i++)
	{
	   for(j=0;j<c;j++)
		    {
    		  
		       	scanf("%d ",&a[i][j]);
		    }
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		    if(i==j)
		    {
		    	printf("%d ",a[i][j]);
				}
				else
				{
					printf(" - ");
				}
	  }
		printf("\n");
	}
	
}
