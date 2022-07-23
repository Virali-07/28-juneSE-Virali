#include<stdio.h>

int main()
{
    int ndays, years, months;
    int *n;
    int *y;
    int *m;
    
    n=&ndays;
    y=&years;
    m=&months;

    printf("Enter number of days: ");
    scanf("%d", &ndays);

    printf("\nYears = %d",*n/365);
    printf("\nMonths = %d", (*n-*y *365) / 30);
    
   

   
}

