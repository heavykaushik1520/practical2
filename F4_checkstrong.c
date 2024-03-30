//check whether given number is strong or not
#include<stdio.h>
int check_strong(int);
void main()
{
	int n,result;
	printf("Enter the number : ");
	scanf("%d",&n);
	result=check_strong(n);
	(result == 1)?printf("%d is strong number.",n):printf("%d is not strong number.",n);
	
	
}
int check_strong(int x)
{
	int i , j ,sum=0,temp,fact;
	temp=x;
	for(j=x;j>0;j=j/10)
	{
		fact=1;
		for(i=1;i<=j%10;i++)
		{
		
			fact=fact*i;
		}
		sum=sum+fact;
	}
	if(temp==sum)
	return 1;
	else
	return 0;
}
