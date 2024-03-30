//Add first and last digit of givren number;
#include<stdio.h>
int add_oneLast(int);
void main()
{
	int n,ans;
	printf("Enter the number: ");
	scanf("%d",&n);
	ans=add_oneLast(n);
	printf("Addition of one and last digit :%d ",ans);
}
int add_oneLast(int n)
{
	
    int	last=n%10;
    while(n>=10)
    {
    	n=n/10;
	}
	int first=n;
	return first+last;
	
	
}
