#include<stdio.h>
main()
{
	int n;
	printf("Enter Value Number = ");
	scanf("%d",&n);
	
	(n %2==0) ? printf("%d is Even Number",n): printf("%d is Odd Number",n);
}