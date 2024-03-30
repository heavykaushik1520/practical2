#include <stdio.h>

int* factorial(int* , int*);

int main() 
{
	int a = 5 ;
	int* b;
	b = &a;
	int* r;
	
    factorial(b,r);
	printf("Result = %d", *r);
     return 0;
}

int* factorial(int* b1 , int* res)
{
	int n = *b1 ;
	int i;
//	printf("n = %d",n);
//	printf("\nB1 = %d",*b1);
	
	*res = b1;
	
    for(i = 1 ; i <= *res ; i++)
	{
	    (*res) = (*res) * i ; 
		printf("res = %d",*res);
	}
	printf("%d", *res);
	return &res; 
}

