//check the given number is palindrome ot not
#include<stdio.h>
int check_palindrome(int);
void main()
{
	int n,result,temp;
	printf("Enter the number: ");
	scanf("%d",&n);
	result=check_palindrome(n);
	(result)?printf("%d is palindrome",n):printf("%d is not pallindrome",n);
	
	
}
int check_palindrome(int x)
{
	int rem,reverse=0,temp;
	temp=x;
	while(x>0)
	{
		rem=x%10;
		reverse=reverse*10 + rem;
		x=x/10;
	}
	if(reverse==temp)
	return 1;
	else
	return 0;
	
	
}
