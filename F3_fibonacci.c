//fibonacci Series in given range , Print fibonacci series? 
#include<stdio.h>
void fibonacci(int,int,int,int,int);
void main()
{
	int a=0,b=1,c,n,i;
	printf("Enter the terms: ");
	scanf("%d",&n);
	
	fibonacci(a,b,c,n,i);
}
void fibonacci(int a,int b,int c,int n,int i)
{
	printf("Fibonacci series : ");
	for(i=1;i<=n;i++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
		
	}
	
}
