/*
  * * * *
  *       *
  *       *
  *  * * *
  *       *
  *       *
  * * * *

*/
#include<stdio.h>
#include<conio.h>

main()
{
     int i,j;
     clrscr();
     for(i=1;i<=7;i++)
     {

	if(i==1 || i==7)
	{
	   printf("*  *  *  *");
	}
	if(i==2 || i==3 || i==5 || i==6)
	{
	    printf("*          *");
	}
	if(i==4)
	{
	   printf("*   *  *  * ");
	}
	printf("\n");
     }
     getch();
}