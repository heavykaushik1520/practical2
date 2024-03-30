#include<stdio.h>
void evenOdd();
void main()
{
	evenOdd();
}
void evenOdd()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	
	
	(num%2==0)?(printf("It is even number.")):(printf("It is odd number."));
	

	
}
