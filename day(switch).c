#include<stdio.h>
main()
{
	char day;
	
	printf("Press S for Sunday\n");
	printf("Press M for Monday\n");
	printf("Press T for tuesday\n");
	printf("Press W for wednesday\n");
	printf("Press t for thursday\n");
	printf("Press F for Friday\n");
	printf("Press s for saturday\n");
	
	printf("Enter The day = ");
	scanf("%c",&day);
	
	switch(day)
	{
		case 'S':
			printf("Sunday");
			break;
		case 'M':
			printf("Monday");
			break;
		case 'T':
			printf("Tuesday");
			break;
		case 'W':
			printf("wendesday");
			break;
		case 't':
			printf("Thursday");
			break;
		case 'F':
			printf("Friday");
			break;
		case 's':
			printf("Saturday");
			break;
		default:
			printf("plz press valid letter");						
	}
}