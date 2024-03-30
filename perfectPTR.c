#include<stdio.h>
void check_perfect(int* , int*);
void main()
{
	int num , result;
	printf("Enter the number : ");
	scanf("%d",&num);
	check_perfect(&num , &result);
	 (result == 1) ? printf("%d is perfect.", num) : printf("%d is not perfect.", num);
	
}
void check_perfect(int* num1 , int* result)
{
	int sum=0,i;
	for(i=1;i<(*num1);i++)
	{
		if((*num1)%i==0)
		sum = sum + i;
	}
	if(sum==*num1)
	*result = 1;
	else
	*result = 0;
}
