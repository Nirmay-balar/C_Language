#include<stdio.h>

main()
{
	int  i,j,r,c;
  printf("enter the size rowes:");
	scanf("%d",&r);
	printf("enter the size columns:");
	scanf("%d",&c);
	int a[r][c];
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
				if(i==0 || j==0 || i==c-1 || j==c-1)
				{
					printf("%d ",a[i][j]);
				}
				else
				{
					printf("- ");
				}
	  }
		printf("\n");
	}
	
}
