#include<stdio.h>

main()
{
	int  i,j,r,c,sum=0,n;
  printf("enter the size rowes:");
	scanf("%d",&r);
	printf("enter the size columns:");
	scanf("%d",&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
	   for(j=0;j<c;j++)
		    {
    		    printf("enter the value of array a[%d][%d]:",i,j);
		       	scanf("%d",&a[i][j]);
		    }
	}
	printf("enter the number of row:");
	scanf("%d",&n);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		    
		    sum=sum+a[i][j];
		    if(i==j)
		    {
		    	printf("%d ",a[i][j]);
				}
				else if(j+i==2)
				{
					printf("%d ",a[i][j]);
				}
				else
				{
					printf("-");
				}
	  }
		printf("\n");
	}
	
}
