#include<stdio.h>
int* myfun(int*);
void main()
{
	int a = 10 ;
	int* ptr = &a;
	int* x;
	x = myfun(ptr);
	printf("%d", *x);
}
int* myfun(int* ptr1)
{
	return ptr1 ;
}
