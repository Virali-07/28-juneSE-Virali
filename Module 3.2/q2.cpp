#include<stdio.h>

main()
{
	int x,y;
	printf("Enter two numbers : ");
	scanf("%d %d",&x,&y);
	
	printf("value before %d %d",x,y);
	x=x+y;
	y=x-y; // y=x+y-y=x
	x=x-y; // x=x+y-x=y

	printf("\nvalue after %d %d",x,y);
	
	 
}
