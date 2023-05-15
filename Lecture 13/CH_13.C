#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char data[100];
	clrscr();
	fp = fopen("data.txt","w");

	printf("enter any data :");
	gets(data);

	fputs(data,fp);
	fputs("\n",fp);

	fclose(fp);

	fp = fopen("data.txt","r");

	while(fgets(data, 15, fp) != NULL)
	{
	    printf("%s",data);
	}

	fclose(fp);

	fp = fopen("data2.txt","w");

	printf("enter any data :");
	gets(data);

	fputs(data,fp);
	fputs("\n",fp);

	fclose(fp);

	fp = fopen("data2.txt","r");

	while(fgets(data, 15, fp) != NULL)
	{
	    printf("%s",data);
	}

	fclose(fp);


	getch();
}
