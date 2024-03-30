#include<stdio.h>
int* greatest(int* , int*  , int*);
void main()
{
	int a , b , c ;
	printf("Enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	int* x = &a;
	int* y = &b;
	int* z = &c;
	int* res ;
	res = greatest(x , y , z);
	printf("Greatest number is %d",*res);
}
int* greatest(int* x1 , int* y1 , int* z1)
{
	int great ;
	
	if(*x1 >= *y1)
	{
		if(*x1 >= *z1)
		great = *x1;
		else 
		great = *z1;
	}
	else
	{
		if(*y1 >= *z1)
		great = *y1;
		else
		great = *z1;
	}
	int* ptr = &great;
	return ptr;
}
