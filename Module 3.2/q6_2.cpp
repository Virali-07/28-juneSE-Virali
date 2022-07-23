#include<stdio.h>

main()
{
	int n[10],i,sum_odd=0,sum_eve=0,odd_count,even_count;
	
	printf("Enter numbers :: ");
	
	for(i=0;i<10;i++)
	{
		
		scanf("%d",&n[i]);
		
		if(n[i]%2==0)
		{
			sum_eve=sum_eve+n[i];
			even_count++;
		}
		else
		{
			sum_odd=sum_odd+n[i];
			odd_count++;
		}
	}
	
		
		printf("\n\n-------Display-------\n\n");
		
		printf("Even numbers are %d\n ",even_count);
		printf("\nOdd numbers are %d\n ",odd_count);
		printf("\nSum of all odd numbers is  %d\n",sum_odd);
		printf("\nSum of all even numbers is %d\n",sum_eve);
}
