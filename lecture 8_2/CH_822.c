#include<stdio.h>

main()
{
	int a[3][3];
	int i,j,b=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
				printf("enter element :");
		    scanf("%d",&a[i][j]);
		}
	
	}
	for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	   {
	   	  	printf("%d",&a[i][j]);
          b++;
		 }
	}
	printf("the length of array:%d",b);
}
