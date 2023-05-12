#include<stdio.h>
#include<string.h>

struct student 
{
	int rn;
	char name[100];
	int chem_marks;
	int maths_marks;
	int phy_marks;
}s[5];
void main()
{
	int i;
	float p;
	
	for(i=0 ; i<=5 ;i++)
	{
		printf("enter your roll number :");
		scanf("%d",&s[i].rn);
		printf("enter your name:");
		scanf("%d",&s[i].name);
		printf("enter your chem_marks :");
		scanf("%d",&s[i].chem_marks);
		printf("enter your maths_marks :");
		scanf("%d",&s[i].maths_marks);
		printf("enter your phy_marks :");
		scanf("%d",&s[i].phy_marks);
	}
	
	for(i=0 ; i<=5; i++)
	{
		printf("roll number : %d\n",s[i].rn);
		printf("name : %d\n",s[i].name);
		printf("chemistry marks : %d\n",s[i].chem_marks);
		printf("mathematic marks : %d\n",s[i].maths_marks);
		printf("physics marks : %d\n",s[i].phy_marks);
		
	   	p=(s[i].chem_marks) + (s[i].maths_marks) + (s[i].phy_marks) * 100 / 300;
		
		printf("your percentage is : %f",p);
	}
}
