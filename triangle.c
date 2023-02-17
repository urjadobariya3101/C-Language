#include<stdio.h>
main()
{
	
	int area,h,b;
	
	printf("enter the value of height of triangle:");
	scanf("%d",&h);
	
	printf("enter the value of base of triangle:");
	scanf("%d",&b);
	
	area = h * b / 2;
	
	printf("Area of triangle: %d",area);
}
