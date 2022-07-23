#include<stdio.h>
main()
{
	int i,a[4];
	
	printf("Enter four numbers :: ");
	for(i=0;i<4;i++)
	{
		
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<4;i++)
	{
		if(a[0]<a[i])
		{
			a[0]=a[i];
		}
	}
	printf("Max number = %d",a[0]);
}
