#include<stdio.h>
//declaration
void fibonacci();
//calling function
void main()
{
	fibonacci();
}
//called function and function body
void fibonacci()
{
	int n ,i, a=0 , b=1 ,c;
	printf("Enter the terms: ");
	scanf("%d",&n);
	printf("Fibonacci series : ");
	for(i=1;i<=n;i++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
		
	}

	
}
