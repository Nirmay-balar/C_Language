#include<stdio.h>
#include<string.h>

struct employee
{
	int id;
	char name[100];
	int age;
	char role[100];
	char city[100];
	int experience;
	char compny_name[100];
}s[100];

void main()
{
	int i,n;
 
	printf("enter the number of employee : ");
	scanf("%d",&n);
	
	for(i=0; i<n ; i++)
	{
		printf("enter your id :\n");
		scanf("%d",&s[i].id);
		
		printf("enter your name :\n");
		scanf("%s",&s[i].name);
		
		printf("enter your age :\n");
		scanf("%d",&s[i].age);
		
		printf("enter your role :\n");
		scanf("%s",&s[i].role);
		
		printf("enter your city :\n");
		scanf("%s",&s[i].city);
		
		printf("enter your experience :\n");
		scanf("%d",&s[i].experience);
		
		printf("enter your compny name :\n");
		scanf("%s",&s[i].compny_name);
	}
	
	for(i=0; i<n ; i++)
	{
		printf("id : %d\n",s[i].id);
		printf("name : %d\n",s[i].name);
		printf("age : %d\n",s[i].age);
		printf("course : %d\n",s[i].role);
		printf("city : %d\n",s[i].city);
		printf("std : %d\n",s[i].experience);
		printf("school : %d\n",s[i].compny_name);
		
	}
}
