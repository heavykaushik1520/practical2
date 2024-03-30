// check whether the given number is divisible by 4 and 6
#include<stdio.h>
void main()
{
	int num = 16;
	if(num%4 == num%6)
	{
		printf(" '24' is divisible by both 4 and 6.");
	}
	else
	{
		printf(" '24' is neither divisible 4 nor divisible by 6. ");
	}
}
