#include<stdio.h>
void perfect_no(int* , int*);
void main()
{
	int num , result , stno , enno;
	printf("Enter the range from stno to enno : ");
	scanf("%d%d",&stno,&enno);
	printf("Perfect Number in Range : ");
	for(num=stno;num<=enno;num++)
	{
		perfect_no(&num,&result);
		if(num==result)
		printf("%d ",num);
	}
}
void perfect_no(int*num1 , int*result1)
{
	int i ;
	*result1 = 0;
	for(i=1;i<(*num1);i++)
	{
		if(*num1 % i ==0)
		*result1 = *result1 + i;
	 } 
}
