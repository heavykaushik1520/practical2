//check whether given number is perfect or not
#include<stdio.h>
int check_perfect(int);
void main()
{
	int n,result;
	printf("Enter the number to check whether it is perfect or not: ");
	scanf("%d",&n);
	result=check_perfect(n);
	(result=1)?printf("%d is perfect.",n):printf("%d is not perfect.",n);
	
}
int check_perfect(int x)
{
	int sum=0,i;
	for(i=1;i<x;i++)
	{
		if(x%i==0)
		sum=sum+i;
	}
	if(sum==x)
	return 1;
	else
	return 0;
}
