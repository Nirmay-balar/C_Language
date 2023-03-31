#include<stdio.h>
#include<conio.h>
main()
{
  int a,b,rev=0,rem;
  clrscr();
  printf("enter the value :");
  scanf("%d",&a);
  b=a;
  while (a!=0)
  {
     rem=a%10;
     rev=rev*10+rem;
     a/=10;
  }
  if(b==rev)
     {
	printf("%d is a palindrome.",b);
     }
     else
     {
	printf("%d is not pelindrome.",b);

     }
   getch();
}
