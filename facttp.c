#include<stdio.h>
int* factorial(int* , int*);
void main()
{
	int a = 5 ;
	int* b = &a;
	int* fact;
    factorial( b , fact);
	printf("%d", *fact);
}
int* factorial(int* b1 , int* fact )
{ 
    *fact = 1 ;
	int  i ;
    for(i=1 ; i<=(*b1) ; i++)
    {
    	*fact = (*fact) * i ;
	}
    return fact;
}
