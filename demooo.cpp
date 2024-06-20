#include<stdio.h>
int main()
{
	int n = 7;
	int i , flag = 0;
	for(i = 2 ; i < n ; i++)
	{
		if(n % i == 0)
		{
			flag = 1 ;
			break;
		}
	}
	
	(flag == 0)? printf("Prime"):printf("Not prime");
	
	
	return 0;
	
}
