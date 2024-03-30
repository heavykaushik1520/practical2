#include<stdio.h>
int add(int*,int*);
void main()
{
	int n1,n2,sum;
	printf("Add two numbers with pass by adress");
	printf("\nEnter two numbers:");
	scanf("%d%d",&n1,&n2);
	sum=add(&n1,&n2);
	printf("\nThe sum of %d and %d is %d",n1,n2,sum);
	
}
int add(int *x ,int *y)
{
//	int sum;
//	sum = *x + *y;
//	return sum;
return *x + *y;
}
