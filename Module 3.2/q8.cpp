#include<stdio.h>

int fact(int n);

main()
{
	int x;
	printf("Enter a number :: ");
	scanf("%d",&x);
	
	printf("Factorial of %d is : %d",x,fact(x));
}
	int fact(int n)
	{
		if(n<=1)
		return 1;
		
		
		return n*fact(n-1);
	}

