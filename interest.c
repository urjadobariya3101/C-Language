#include<stdio.h>
main()
{
	
	int i,p,r,t;
	
	printf("Enter the value of initial principal balance:");
	scanf("%d",&p);
	
	printf("Enter the value of annual interest rate:");
	scanf("%d",&r);
	
	printf("Enter the value of time (in years):");
	scanf("%d",&t);
	
	i = p * r * t / 100;
	
	printf("simple interest: %d",i);
	
}
