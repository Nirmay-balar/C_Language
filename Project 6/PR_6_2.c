#include<stdio.h>
main()
{
    char str[50];
    int i, len, b=0;
    printf("Enter a string:");
    scanf("%s", str);
    len = strlen(str);
    for(i=0;i<len;i++)
	{
        if(str[i]!=str[len-i-1])
		{
            b=1;
        }
    }
    
    if (b==0)
    {
        printf("String is a palindrome.");
    }    
    else
	{
        printf("String is not a palindrome.");
    }
} 
