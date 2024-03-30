#include<stdio.h>
void main()
{
	int n = 123;
	int sum = 0;
	int r;          //reminder
	while(n>0)
	{
		r = n%10;
	  sum = sum*10 + r;
		n = n/10;
	}
	printf("the reversed number is %d",sum);
}
