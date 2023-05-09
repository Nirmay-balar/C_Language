#include<stdio.h>


int plus(int a,int b)
{
	return a+b;
}
int min(int a,int b)
{
	return a-b;
} 
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
int mod(int a,int b)
{
	return a%b;
}

main()
{
	int n,a,b;
	printf("Press 1 for add\n");
	printf("Press 2 for sub\n");
	printf("Press 3 for mul\n");
	printf("Press 4 for div\n");
	printf("Press 5 for mod\n");
	printf("Press 0 for exit\n");
	printf("Enter your choice:");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			printf("Enter a:");
	        scanf("%d",&a);
	        printf("Enter b:");
	        scanf("%d",&b);
			printf("%d",plus(a,b));
			main();
		break ;
		case 2:
			printf("Enter a:");
	        scanf("%d",&a);
	        printf("Enter b:");
	        scanf("%d",&b);
			printf("%d\n",min(a,b));
			main();
		break;
		case 3:
			printf("Enter a:");
	        scanf("%d",&a);
	        printf("Enter b:");
	        scanf("%d",&b);
			printf("%d\n",mul(a,b));
			main();
		break ;
		case 4:
			 printf("Enter a:");
	         scanf("%d",&a);
	         printf("Enter b:");
	         scanf("%d",&b);
			 printf("%d\n",div(a,b));
			 main();
		break ;
		case 5:
			printf("Enter a:");
	        scanf("%d",&a);
	        printf("Enter b:");
	        scanf("%d",&b);
			printf("%d\n",mod(a,b));
			main();
		break ;
		case 0:
			
		break;
		
	    default:
		  	printf("Invalide choice.");
     }
}
