#include<stdio.h>
void pallindromeInRange(int* , int*);
void main()
{
	int stno , enno,num,rev ;
	printf("Enter the starting number and ending number : ");
	scanf("%d%d",&stno,&enno);
	for(num=stno;num<=enno;num++)
	{
		pallindromeInRange(&num,&rev);
		if(num==rev)
		printf("%d ",num);
	}
}
void pallindromeInRange(int*num1 , int*rev)
{    
	int rem;
	 int temp = *num1;
	 *rev = 0;
	while(temp)
	{
		rem = temp % 10;
		temp = temp/10;
		*rev = (*rev)*10 + rem;
	}
}
