#include<stdio.h>
void main()
{
	int n , i , sum =0;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if(sum==n)
	
		printf("The number is Perfect");
		
	else
	    printf("The number is not perfect");
	
	
}
