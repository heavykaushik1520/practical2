//ADD FIRST AND LAST DIGIT
#include<stdio.h>
int add_firstlast();
void  main()
{
	int x ;
	x = add_firstlast();
	printf("the sum is : %d",x);
}
int add_firstlast()
{
	int n , firstdigit , lastdigit , sum;
	printf("Enter number : ");
	scanf("%d",&n);
	lastdigit = n%10;
	while(n>=10)
	{
	   n = n/10;
	  	
	}
	firstdigit = n;
	sum = firstdigit + lastdigit;
	return sum;
	
}
