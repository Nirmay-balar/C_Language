#include<stdio.h>
#include<string.h>

int length(char a[100])
{
	
	int i,l=0;
	for(i=0;a[i]!='\0';i++)
	{
		l++;
	}
	
	return l;
}
void main()
{
	char n[100];
	int len;
	int *l;

	printf("enter string :");
	gets(n);
	len=length(n);
	
	l=len;
	printf("the length of string is : %d",l);
	
}
