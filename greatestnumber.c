#include<stdio.h>
void main()
{
	int a , b , c , x ;
	a = 22;
	b = 17;
	c = 25;
	// for the greatest number 
	x = (a>b && a>c)?(a):((b>c)?(b):(c));
	printf("Greatest Number is : %d",x);
}
