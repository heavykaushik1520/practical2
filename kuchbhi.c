#include<stdio.h>

int* factorial(int*);

int main() 
{
	int a = 5 ;
	int* b = &a ;
	int* res;
	res = factorial(b);
	printf("\nFactorial of %d is %d",a , *res);
    return 0; 
}

int* factorial(int* b1)
{
	int n = *b1 ;
	printf("n = %d", n);
	int res = 1;
	while(n > 0) 
	{
		res = res * n ; 
		n-- ;
	//	printf("\tres = %u", res);
	}
	b1 = &res ;
//	printf("\n address of b1 = %u",&b1);
return b1;  
   // return &res;
}

