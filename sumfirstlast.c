#include<stdio.h>
void main()
{
	int last , n , sum ;
	printf("Enter the number : ");
	scanf("%d",&n);
	last=n%10;
	while(n>=10)
	n = n/10;
	sum= last + n ;
	printf("\nSum of first and last digit of %d and %d is :%d ",n,last,sum);
	
	
}
