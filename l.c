//given year is leap or not
#include<stdio.h>
void main()
{
	int year;
	printf("Enter the year:");
	scanf("%d",&year);
	if((year%4==0&&year%100!=0)||(year%400==0&&year%100==0))
	{
		printf("\n?? ???? %d ??? ???",year);
	}
	else
	{
		printf("\n ?? ????%d ??? ???",year);
	}
	
}
