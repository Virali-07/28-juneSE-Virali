#include<stdio.h>

main()
{
	int i,sum=0,a[4];
	
	printf("Enter numbers :: ");		
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	

	
	printf("\nSummation of the given number is %d\n ",sum);
}
