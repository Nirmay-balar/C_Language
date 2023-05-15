#include<stdio.h>

void main()
{
	FILE *fp;
	char data[100];
	
	fp = fopen("data.txt","w");
	
	printf("enter any data :");
	gets(data);
	
	fputs(data,fp);
	fputs("\n",fp);
	
	fclose(fp);

}
