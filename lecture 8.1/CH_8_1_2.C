/*1
  1 2
  1 2 3
  1 2 3 4
  1 2 3 4 5
*/
#include<stdio.h>
#include<conio.h>

main()
{
   int i,j;
   clrscr();
   for(i=1;i<=5;i++)
   {
	for(j=i;j>=1;j--)
	{
	  printf("%d",j);
	}
	printf("\n");
   }

   getch();
}