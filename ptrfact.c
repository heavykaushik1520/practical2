#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("Factorial = %d",getFactorial(&n));
}

int getFactorial(int *n){
	int fact = 1,i;
	for( i = 1; i <= *n; i++){
		fact = fact * i;
	}
	return fact;
}

