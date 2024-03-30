#include<stdio.h>
void greatest_number(int* , int* , int* , int*);
void main()
{
	int a,b,c,greatest;
	printf("Enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
    greatest_number(&a , &b , &c , &greatest );
	printf("%d is  greatest number among %d %d %d.",greatest,a,b,c);
}
void greatest_number(int*a1 , int*b1 , int*c1 , int*greatest )
{
    int great;
	great = *a1;
	if(*b1 > great)
	{
		great = *b1;
	}	
	if(*c1 > great)
	{
		great = *c1;
	}
	*greatest = great ;
}
