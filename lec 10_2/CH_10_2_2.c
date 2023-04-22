#include<stdio.h>

main() 
{
    int a=0,b=0,c=0,n,i,f,g;
    
    char pass[60],d=gmail,e=com;
    
    gets(pass);
    if(strlen(pass)>=6)
    {
    	for(i=0;i<n;i++)
    	{
			if(pass[i]>=97 && pass[i]<=122)
			{
		        a++;	
			}
			if(pass[i]>=48 && pass[i]<=57)
    		{
    			b++;
			}
			if(pass[i]=64)
			{
		        c++;	
			}
			if(pass[i]==d)
			{
				f++;
			}
			if(pass[i]==e)
			{
				g++;
			}
		}
		if(a!=0 && b!=0 && c!=0 && f!=0 && g!=0)
		{
			printf("email is log in.");
		}
	}
	else
	{
		printf("email is not log in.");
	}
}

