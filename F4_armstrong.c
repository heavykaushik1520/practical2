//check whether given number is armstrong or not
#include<stdio.h>
int check_armstrong(int );
void main()
{
	int n , result;
	printf("Enter the number : ");
	scanf("%d",&n);
	result=check_armstrong(n);
	(result==1)?printf("%d is armstrong",n):printf("%d is not armstrong",n);
}
int check_armstrong(int x)
{
	int sum=0,r;
	while(x>0)
	{
		r=x%10;
		sum=sum+(r*r*r);
		x=x/10;
	}
	if(sum==x)
	return 1;
	else
	return 0;
}
