#include<stdio.h>

void main()
{
	
	
	FILE *fp;
	char file[100], n;
	
	fp = fopen("file.txt","a");
	
	printf("enter any data :");
	gets(file);
	
	n = file[100];
	
	fputs(file,fp);
	fputs("\n",fp);
	
	
	fclose(fp);
	
	
	fp = fopen("file2.txt","r");
	
//	while(fgets(data, 15, fp) != NULL)
//	{
//	    printf("%s",data);
//	}
	fputs(file,fp);

	fclose(fp);


//
//	fp = fopen("data2.txt","w");
//
//	printf("enter any data :");
//	gets(data);
//
//	fputs(data,fp);
//	fputs("\n",fp);
//
//	fclose(fp);
//	
//	
//	//c = fgetc(fp);
//	fp = fopen("data2.txt","r");
//
//	while(fgets(data, 15, fp) != NULL)
//	{
//	    printf("%s",data);
//	}

//	fclose(fp);

}
