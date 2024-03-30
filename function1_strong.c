#include<stdio.h>
void strong();
void main()
{
	strong();
}
void strong()
{
	int n,temp , sum =0,i,j,fact;
	printf("Enter the number : ");
	scanf("%d",&n);
	temp=n;
	for(j=n;j>0;j=j/10)
	{
		fact = 1;
		for(i=1;i<=j%10;i++)
		{
			fact=fact*i;
		}
		sum=sum + fact;
	}
	(sum==temp)?printf("Number %d is strong number ",temp):printf("Number %d is not strong number",temp);
    
	
	 
}
