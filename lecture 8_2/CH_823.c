#include<stdio.h>

main()
{
	int a[3][3],sum=0,avg;
	int i,j,b=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
				printf("enter the element of array:");
		    scanf("%d",&a[i][j]);
		    sum=sum+a[i][j];
		}
	
	}
	for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	   {
	   	  	printf("%d",a[i][j]);
          b++;
		 }
	}
	avg=sum/b;
	printf("The sum of all elements are : %d",sum);
	printf("\nthe length of array:%d",b);
	printf("\nthe avrage of the array:%d",avg);
	
}
