#include<stdio.h>
main()
{
	int l,b;
	float r;
	int *len;
	int *bre;
	float *rad;
	
	len=&l;
	bre=&b;
	rad=&r;
	
	printf("enter length :");
	scanf("%d",&l);
	
	printf("enter breath :");
	scanf("%d",&b);
	
	printf("area of triangle is %d",(*len)*(*bre)/2);
	
	printf("\narea of rectangle is %d",(*len)*(*bre));
	
	printf("\nenter radius :");
	scanf("%f",&r);
	
	printf("\narea of circle is %.2f",3.14*(*rad)*(*rad)); 
}
