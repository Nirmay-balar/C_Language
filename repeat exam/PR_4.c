#include<stdio.h>

void main()
{
	int i,n;
	
	int a[i];
	int *p;
	
	printf("enter the size of array :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("enter the elements : ");
		scanf("%d",&a[i]);
		
	}
	p=&a;
	for(i=0; i<n; i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d",*p);
		}
//		else
//		{
//			printf("-");
//		}
		
	}
	
	
	
}
