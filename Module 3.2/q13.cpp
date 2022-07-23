#include<stdio.h>

main()
{
	int n,first_digit,last_digit,sum=0;
	
	printf("Enter number :: ");
	scanf("%d",&n);
	
	last_digit=n%10;
	while(n >= 10)
	{
		n=n/10;
	}
	
	first_digit=n;
	sum=first_digit+last_digit;
	
	printf("\nSummation of first and last number is %d\n",sum);
	
}
