#include<stdio.h>
#include<conio.h>
main()
{
    int i,a,length=0;
    clrscr();
    printf("enter the value:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
       length++;
    }
    printf("the length is :%d",length);
    getch();
}