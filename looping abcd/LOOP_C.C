/*    * * * *
     *
     *
     *
     *
     *
      * * * *
*/
#include<stdio.h>
#include<conio.h>
main()
{
   int i,j,s;
   clrscr();
   for(i=1;i<=7;i++)
   {
    if(i==1 || i==7)
    {
     printf("  * * * * ");
    }
    if(i==2 || i==3 || i==4 || i==5 || i==6)
    {
     printf(" *  ");
    }
   printf("\n");
   }
   getch();
}