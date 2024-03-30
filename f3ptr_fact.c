#include<stdio.h>
void Factof(int* ,int*);
void main()
{
	int num,fact=1;
	printf("Enter the number: ");
	scanf("%d",&num);
	Factof(&num,&fact);
	printf("%d",fact);
	
}
void Factof(int* num1 , int* fact1)
{
	int x = *num1;
    *fact1 = 1;
	while(x!=0)
	{
		(*fact1)=(*fact1) * x;
		x--;
	}	
}
