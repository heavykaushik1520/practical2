#include<stdio.h>
void strong_inRange(int* , int*);
void main()
{
	int stno , enno , num,sum;
	printf("Enter the staring number and ending number : ");
	scanf("%d%d",&stno,&enno);
	for(num=stno;num<=enno;num++)
	{
		strong_inRange(&num , &sum);
		if(num==sum)
		printf("%d ",num);
	}
}
void strong_inRange(int*num1 , int*sum)
{
	int temp;
    temp = *num1;
	*sum = 0;
	int i;
	for(i = (*num1); i>0 ; i = i /10)
	{
		int x;
		int fact = 1;
		for(x=1 ; x <= i % 10; x++ )
		{
		    fact = fact * x;	
		}
		*sum = *sum + fact ;
	}	
}
