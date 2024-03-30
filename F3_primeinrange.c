//Print prime number in the given range 1 to n?
#include<stdio.h>
void prime_range(int,int);
void main()
{
	int num,i,count,stno,enno;
	printf("Enter the start number:");
	scanf("%d",&stno);
	printf("Enter the ending number: ");
	scanf("%d",&enno);
	prime_range(stno,enno);
}
void prime_range(int stno,int enno)
{
	int num,i,count;
	
	printf("The prime number in given range : ");
	for(num=stno;num<=enno;num++)
	{
		count=0;
		for(i=1;i<=num;i++)
		{
			if(num%i==0)
			count++;
			
		}
		if(count==2)
		printf("%d ",num);
	}
	printf("\n");
}
