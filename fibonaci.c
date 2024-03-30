#include<stdio.h>
void main()
{
	int num ,num1 , num2 ;
	num = num1 + num2;
	
	num1 = 0;
	num2 = 1;
	for(int count = 3 ; count<num ; count++)
	{
		num1 = num2;
		num2 = num;
		num = num1 + num2;
		printf("%d",count);
	}
}
