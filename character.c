#include<stdio.h>

main()
{
	char ch;
	
	printf("Enter The Character = ");
	scanf("%c",&ch);
	
	if( ch>='a' && ch<='z' || ch<='A' && ch>='Z' )
	{
		printf("%c Is Alphabet",ch);
	}
	else if(ch>='0' && ch<='9')
	{
		printf("%c Is Numeric",ch);
	}
	else
	{
		printf("%c is Special Symbol",ch);
	}
	
}