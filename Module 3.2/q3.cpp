#include<stdio.h>

main()
{
	int n;
	
	printf("Enter a number :: ");
	scanf("%d",&n);
	
	(n%2)?(printf("%d is even\n",n)):(printf("%d is odd\n",n));
}
