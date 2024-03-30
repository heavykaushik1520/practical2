//perfect number in range by type $
#include<stdio.h>
int isPerfect(int);
void main()
{
	int mn,mx;
	printf("enter the minimum value");
	scanf("%d",&mn);
	printf("enter the maximum value: ");
	scanf("%d",&mx);
	printf("Perfect number in given range are: ");
	while(mn<=mx)
	{
		if(isPerfect(mn))
		printf("%d ",&mn);
		
	}
	mn++;
}
int isPerfect(int num)
{  
	int sum=0,i;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==num)
	return 1;
	else
	return 0;
}
