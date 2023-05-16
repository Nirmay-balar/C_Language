#include<stdio.h>

void main()
{
	FILE *fp;
	char file[100];
	
	fp = fopen("file.txt","w");
	
	printf("enter any data : ");
	gets(file);
	
	fputs(file,fp);
	fputs("\n",fp);
	
	fclose(fp);

}
