#include<stdio.h>
void main()
{
	int a,b,c,x;
	int no = 123;
	a = no % 10;
	printf("a = %d", a);
	no = no / 10;
	printf("\n My no is= %d",no);
	b = no % 10 ;
	printf("\n b = %d", b);
	c = no / 10;
	printf("\n c = %d",c);
	// now add a , b , c:
	x = a + b + c;
	printf("\n x = %d",x);
}
