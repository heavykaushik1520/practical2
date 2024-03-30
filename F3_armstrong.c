//Print armstrong number in the the given range 1 to n?
#include<stdio.h>
void armstrong_range(int,int);
void main()
{
	int num,r,sum,temp;
    int stno,enno;
    printf("Input starting number of range: ");
    scanf("%d",&stno);

    printf("Input ending number of range : ");
    scanf("%d",&enno);
    armstrong_range(stno,enno);
}
void armstrong_range(int stno,int enno)
{
	int num,r,temp,sum;
	printf("Armstrong number in range : ");
	for(num=stno;num<=enno;num++)
	{
		temp=num;
		sum=0;
		while(temp!=0)
		{
			r=temp%10;
		 temp=temp/10;
		  sum=sum+(r*r*r);
		  
		}
		if(num==sum)
		printf("%d ",num);
		
	}
	printf("\n");
}
