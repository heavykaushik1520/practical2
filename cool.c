#include<stdio.h>
void factorialof(int*, int*);
void main()
{
	int no,fact ;
	printf("Enter the number: ");
	scanf("%d",&no);
    factorialof(&no,&fact);
	printf("%d",fact);
}
void factorialof(int* x, int* fact1)
{
	int i ; 
	*fact1 = 1;
	for(i = 1 ; i<=*x ; i++)
	{
	   (*fact1) = (*fact1) * i ;	
	}
	
}
