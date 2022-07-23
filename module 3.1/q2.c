#include<stdio.h>
int main()
{
	int a,b,ans;
	
	printf("\n-------Multiplication-------\n");
	printf("\nEnter first number :: ");
	scanf("%d",&a);
	printf("Enter second  number :: ");
	scanf("%d",&b);
	
	ans=a*b;
	printf("Multiplication of %d * %d = %d\n\n",a,b,ans);
	
	printf("\n-------Division-------\n");
	printf("\nEnter first number :: ");
	scanf("%d",&a);
	printf("Enter second  number :: ");
	scanf("%d",&b);
	
	ans=a/b;
	printf("Division of %d / %d = %d\n\n",a,b,ans);
	
    printf("\n-------Addition-------\n");
	printf("\nEnter first number :: ");
	scanf("%d",&a);
	printf("Enter second  number :: ");
	scanf("%d",&b);
	
	ans=a+b;
	printf("Addition of %d + %d = %d\n\n",a,b,ans);
	
	printf("\n-------Subtraction-------\n");
   	printf("\nEnter first number :: ");
	scanf("%d",&a);
	printf("Enter second  number :: ");
	scanf("%d",&b);
	
    ans=a-b;
    printf("Subtraction of %d - %d = %d\n\n",a,b,ans);
    
    printf("\n-------Modulo-------\n");
    printf("\nEnter first number :: ");
    scanf("%d",&a);
    printf("\nEnter second number :: ");
    scanf("%d",&b);
    
    ans=a%b;
    printf("Modulo of %d % %d = %d\n\n",a,b,ans);
    
	
}
