#include<stdio.h>
#include<conio.h>
main()
{
   int n;
   clrscr();
   printf("press 1 for monday\n");
   printf("press 2 for tuesday\n");
   printf("press 3 for wednesday\n");
   printf("press 4 for thursday\n");
   printf("press 5 for friday\n");
   printf("press 6 for saturday\n");
   printf("press 7 for sunday\n");
   scanf("%d",&n);
   switch(n)
   {
      case 1:
	printf("today is monday...");
      break;
      case 2:
	printf("today is tuesday...");
      break;
      case 3:
	printf("today is wednesday...");
      break;
      case 4:
	printf("today is thurseday...");
      break;
      case 5:
	printf("today is friday...");
      break;
      case 6:
	printf("today is saturday...");
      break;
      case 7:
	printf("today is sunday...");
      break;
      default:
	printf("invalid choice");






   }
   getch();
}