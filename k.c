#include<stdio.h>
void myfun(int*);
void main()
{
	int a=10;
	myfun(&a);
	printf("value at adress in x :%d",a);
}
void myfun(int* x)
{
	*x = 40;
}
	
