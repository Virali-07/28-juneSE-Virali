#include<stdio.h>

main()
{
	int n1=0,n2=1,term,i,nth;
	
	printf("Enter the number of terms you want in series :: ");
	scanf("%d",&term);
	
	if(term<=0)
	{
		printf("Invalid input !!! ");
	}
	else if(term==1)
	{
		printf("\n 1 ");
	}
	else
	{
		printf("\n\n-------Your series-------\n\n");
		for(i=1;i<term;i++)
		{
			printf("%d\t",n1);
			nth=n1+n2;
			
			n1=n2;
			n2=nth;
		}
	}
}

