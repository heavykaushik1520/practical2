//Finding area and perimeter of rectangle or circle. 
#include<stdio.h>
void calculate(int,int);
void main()
{
	int l=10 , b=20;
	calculate(l,b);
}
void calculate(int l,int b )
{
	int perimeter,area;
	perimeter = 2*(l + b);
	area = l*b;
	printf("Perimeter = %d",perimeter);
	printf("\nArea=%d",area);
	
}
