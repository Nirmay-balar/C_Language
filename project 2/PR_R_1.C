#include<stdio.h>
#include<conio.h>
main()
{
   char n;
   clrscr();
   printf("enter the value c:");
   scanf("%c",&n);
   if((n>='a'&& n<='z')||(n<='A' && n<='Z'))
   {
      printf("%n is alphabet..",n);
   }
   else if(n>='0' && n<='9')
   {
      printf("%n is digit...",n);
   }
   else
   {
      printf("%n is special charector...",n);
   }
   getch();
}