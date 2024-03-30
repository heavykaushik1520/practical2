//Check if the given number is even or odd. 
#include<stdio.h>
void evenOdd(int);
void main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	evenOdd(n);
	
}
void evenOdd(int num)
{    
    
	(num%2==0)?printf("Number is even."):printf("Number is odd.");
   
}

