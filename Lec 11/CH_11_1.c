#include<stdio.h>

void main()
{
	int a, sq=0;
	int *p;
	printf("enter the value of a :");
	scanf("%d",&a);
	p= &a;
	sq=(*p)*(*p);
	printf("square of value is %d",sq);
}
