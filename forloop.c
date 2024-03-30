#include<stdio.h>
void main()
{
	int a = 0;
	for(a=0;a<5;a++);
	{
		printf("%d",a);
	}
	{
		printf("\tOutside Loop %d",a);
	}
}
