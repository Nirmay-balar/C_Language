#include<stdio.h>

void main()
{
	int a,b;
	int *p;
	int *q;
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	p=a;
	q=b;
	printf("a = %d \n",p);
	printf("b = %d ",q);
}
