#include<stdio.h>
int main()
{
	int i,number;
	printf("The number between 1 to 50 ::");
	scanf("%d",&number);
	for(i=1;i<=50;i++)
	{
		printf("%d / 3 = %d\n",i,number/3);
	}

}
