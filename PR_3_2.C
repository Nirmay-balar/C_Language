#include<stdio.h>
#include<conio.h>
main()
{
    int a,b;
    clrscr();
    printf("enter number to print table:");
    scanf("%d",&b);
    for(a=1;a<=10;a++)
    {
       printf("%d x %d = %d\n",b,a,b*a);
    }
    getch();
}