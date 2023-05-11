#include<stdio.h>
#include<string.h>

struct student
{
	int id;
	char name[100];
	int age;
	char course[100];
	char city[100];
	int std;
	char school[100];
}s[100];

void main()
{
	int i,n;
 
	printf("enter the number of student : ");
	scanf("%d",&n);
	
	for(i=0; i<n ; i++)
	{
		printf("enter your id :\n");
		scanf("%d",&s[i].id);
		
		printf("enter your name :\n");
		scanf("%s",&s[i].name);
		
		printf("enter your age :\n");
		scanf("%d",&s[i].age);
		
		printf("enter your course :\n");
		scanf("%s",&s[i].course);
		
		printf("enter your city :\n");
		scanf("%s",&s[i].city);
		
		printf("enter your std :\n");
		scanf("%d",&s[i].std);
		
		printf("enter your school :\n");
		scanf("%s",&s[i].school);
	}
	
	for(i=0; i<n ; i++)
	{
		printf("id : %d\n",s[i].id);
		printf("name : %d\n",s[i].name);
		printf("age : %d\n",s[i].age);
		printf("course : %d\n",s[i].course);
		printf("city : %d\n",s[i].city);
		printf("std : %d\n",s[i].std);
		printf("school : %d\n",s[i].school);
		
	}
}
