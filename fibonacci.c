//fibonacci series
#include<stdio.h>
void fibonacci();
void main()
{
	fibonacci();
}
void fibonacci()
{
	int n , a=0 ,b =1 , c , i;
	printf("Enter the term :");
	scanf("%d",&n);
	for(i = 1 ; i<=n ; i++)
	{
		printf("%d ",a);
		c=a+b;
		a = b;
		b = c;
	}
}
