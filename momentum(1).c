#include<stdio.h>

main()
{
	char ch;
	printf("enter Ch=");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z')
	{
		printf("%c value is small alphabet");
	}
	else if(ch>='A' && ch<='Z')
	{
	  printf("%c value is capital alphabet");	
	}
	else if(ch>='0' && ch<='9999999999999999999')
	{
		printf("%c value is digit");
		
	}
	 else
	{
		printf("%c value is special character");
	}
	
}


