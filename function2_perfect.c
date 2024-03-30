//PERFECT NUMBER 
#include<stdio.h>
int check_perfect();
void main()
{
	int x,n;
    x =	check_perfect();
    if(x==n)
    printf("Given number is perfect.");
    else
    printf("Given number is not perfect.");
}
int check_perfect()
{
	int n,sum=0,i;
	printf("Enter the number : ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if(sum==n)
	return 1;
	else
	return 0;
}
