#include<stdio.h>
int add(int,int);
void main()
{
	int a=20,b=30,c;
	c=add(a,b);
	printf("addition of %d and %d : %d",a,b,c);
}
int add(int a,int b)
{
	int ans;
	ans=a+b;
	return ans;
}
