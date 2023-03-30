#include<stdio.h>
#include<conio.h>
main()
{
    char i='a';
    clrscr();
    printf("alphabet from a-z are :\n");
    do
    {
       printf("%c\n",i);
       i++;
    }
    while(i<='z');
    getch();
}