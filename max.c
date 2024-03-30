#include<stdio.h>
void main()
{
	int a = 10;
	int b = 5;
	int c = 13;
	int max;
	max = a>b?a:b;
	max = max>c?max:c;
	printf("Maximum Number :%d ",max);
}
