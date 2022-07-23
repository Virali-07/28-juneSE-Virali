#include<stdio.h>

main()

{
	int n,reverse_num=0,remainder,a;
	printf("Enter the number to reverse :: ");
	scanf("%d",&n);
	
	a=n;
	
	for(;n>0;)
	{
		remainder=n%10;
		
		reverse_num=reverse_num*10+remainder;
		
		n=n/10;
	}
	printf("Reverse of %d is %d",a,reverse_num);
}
