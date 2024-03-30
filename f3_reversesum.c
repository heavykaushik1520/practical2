//Accept a 3 digit number from user and find the sum of the digits and also reverse the number  
#include<stdio.h>
void reverseSum(int);
void main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	reverseSum(num);
}
void reverseSum(int num)
{
	int sum=0,rev=0;
	while(num!=0)
	{
		sum=sum+num%10;
		rev=(rev*10)+ (num%10);
		num=num/10;
	}
    printf("Sum of digit is %d\n ",sum);
	printf("Reverse of is %d ",rev);

    	
	
}
