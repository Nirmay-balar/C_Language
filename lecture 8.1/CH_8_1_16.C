// 1 0 1 0 1
// 0 1 0 1
// 1 0 1
// 0 1
// 1
#include<stdio.h>
#include<conio.h>
main()
{
  int i,j;
  clrscr();
  for(i=5;i>=1;i--)
  {
    for(j=1;j<=i;j++)
      {
	if((i+j)%2==0)
	{
	  printf("1 ");
	}
      else
	{
	  printf("0 ");
	}
      }
    printf("\n");
  }
  getch();
}