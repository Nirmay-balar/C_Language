#include<stdio.h>

void main()
{
	int num1,i,r;
	
	printf("Enter the first number for the range: ");
    scanf("%d",&num1); 
   
    printf("Display the odd numbers between %d : ",num1);
    for(i=0; i<=num1; i++)
	{
        r=i%2;
        if(r==1)
        printf("\n %d",i);
    }
}
