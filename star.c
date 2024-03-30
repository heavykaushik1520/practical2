#include<stdio.h>
void main()
{
	int i , j , n = 5;
	for( i = n ; i > n ; i--)
	{
		for( j = n ; j <= i ; j--)
		printf("*");
	}
	printf("\n");
	
}
