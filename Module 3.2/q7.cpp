#include<stdio.h>

main()
{
	int n,i;
	printf("Enter an integer :: ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("\n%d X %d = %d \n ",n,i,n*i);
	}
}
