//check armstrong number
#include<stdio.h>
void armStrong();
void main()                                    //calling function
{
	armStrong();
}
void armStrong()                               //called function
{
	int num , sum=0 , rem;
	printf("Enter three digit number : ");
	scanf("%d",&num);
//	sum=0;
	while(num!=0)
	{
		rem=num%10;
		sum=sum+(rem*rem*rem);
		num=num/10;
	}
	if(sum==num)
	printf("This armstrong number.");
	else
	printf("This is not armstrong number.");
	
}
