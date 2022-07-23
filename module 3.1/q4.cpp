#include<stdio.h>
int main()
{
	int p,r,n,SI;
	printf("Enter principle amount ::");
	scanf("%d",&p);
	
	printf("Enter rate of interest ::");
	scanf("%d",&r);
	
	printf("Enter number of months ::");
	scanf("%d",&n);
	
	SI=p*r*n/100;
	printf("SI :: %d",SI);
}
