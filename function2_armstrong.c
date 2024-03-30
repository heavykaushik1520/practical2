//ARMSTRONG NUMBER
#include<stdio.h>
int  isArmstrong();
void main()
{
	int x;
    x =	isArmstrong();
    printf("It is armstrong number.",x);
}
int isArmstrong()
{
	int num , r , sum =0,temp;
	printf("Enter Number : ");
	scanf("%d",&num);
	
	for(temp=num;num!=0;num=num/10)
	{
		r=num%10;
		sum=sum+(r*r*r);
	}
	if(sum==num)
	return 1;
	else
	return 0;
}

